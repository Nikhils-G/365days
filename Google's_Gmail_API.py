from google.oauth2 import service_account
from googleapiclient.discovery import build
from email.mime.text import MIMEText
import base64

def send_email_gmail_api(to, subject, body):
    try:
        SCOPES = ["https://www.googleapis.com/auth/gmail.send"]
        creds = service_account.Credentials.from_service_account_file("credentials.json", scopes=SCOPES)

        service = build("gmail", "v1", credentials=creds)

        # Create the email
        message = MIMEText(body)
        message["to"] = to
        message["subject"] = subject
        encoded_message = base64.urlsafe_b64encode(message.as_bytes()).decode()

        send_message = {"raw": encoded_message}

        # Send the email
        service.users().messages().send(userId="me", body=send_message).execute()
        print("Email sent successfully via Gmail API!")
    except Exception as e:
        print(f"Failed to send email: {e}")

# Example usage
send_email_gmail_api(
    to="recipient@example.com",
    subject="Test Email",
    body="Hello, this is a test email sent using the Gmail API!"
)
