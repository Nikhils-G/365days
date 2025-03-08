from fastapi import FastAPI
import smtplib
from email.message import EmailMessage

app = FastAPI()

def send_email(sender_email, sender_password, recipient_email, subject, body):
    try:
        msg = EmailMessage()
        msg["From"] = sender_email
        msg["To"] = recipient_email
        msg["Subject"] = subject
        msg.set_content(body)

        with smtplib.SMTP_SSL("smtp.gmail.com", 465) as server:
            server.login(sender_email, sender_password)
            server.send_message(msg)

        return {"message": "Email sent successfully!"}
    except Exception as e:
        return {"error": str(e)}

@app.post("/send-email/")
def send_email_api(sender_email: str, sender_password: str, recipient_email: str, subject: str, body: str):
    return send_email(sender_email, sender_password, recipient_email, subject, body)

# Run using:
# uvicorn script_name:app --reload
