from flask import Flask, request, jsonify
import smtplib
from email.message import EmailMessage

app = Flask(__name__)

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

@app.route("/send-email", methods=["POST"])
def send_email_api():
    data = request.json
    sender_email = data.get("sender_email")
    sender_password = data.get("sender_password")
    recipien
