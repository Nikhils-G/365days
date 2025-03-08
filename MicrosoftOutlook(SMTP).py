import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText

def send_email_outlook(sender_email, sender_password, recipient_email, subject, body):
    try:
        # Create message container
        msg = MIMEMultipart()
        msg["From"] = sender_email
        msg["To"] = recipient_email
        msg["Subject"] = subject
        msg.attach(MIMEText(body, "plain"))

        # Connect to Outlook SMTP server
        with smtplib.SMTP("smtp.office365.com", 587) as server:
            server.starttls()
            server.login(sender_email, sender_password)
            server.sendmail(sender_email, recipient_email, msg.as_string())

        print("Email sent successfully via Outlook!")
    except Exception as e:
        print(f"Failed to send email: {e}")

# Example usage
send_email_outlook(
    sender_email="your_email@outlook.com",
    sender_password="your_password",
    recipient_email="recipient@example.com",
    subject="Test Email",
    body="Hello, this is a test email sent from Python using Outlook SMTP!"
)
