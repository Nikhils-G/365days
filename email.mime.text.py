import smtplib
from email.mime.text import MIMEText

def send_email_mime(sender_email, sender_password, recipient_email, subject, body):
    try:
        # Create the email message
        msg = MIMEText(body, "plain")
        msg["From"] = sender_email
        msg["To"] = recipient_email
        msg["Subject"] = subject

        # Connect to SMTP server and send the email
        with smtplib.SMTP_SSL("smtp.gmail.com", 465) as server:
            server.login(sender_email, sender_password)
            server.sendmail(sender_email, recipient_email, msg.as_string())

        print("Email sent successfully!")
    except Exception as e:
        print(f"Failed to send email: {e}")

# Example usage
send_email_mime(
    sender_email="your_email@gmail.com",
    sender_password="your_password",
    recipient_email="recipient@example.com",
    subject="Test Email",
    body="Hello, this is a test email sent from Python using MIMEText!"
)
