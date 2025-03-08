import asyncio
import aiosmtplib
from email.message import EmailMessage

async def send_email_async(sender_email, sender_password, recipient_email, subject, body):
    message = EmailMessage()
    message["From"] = sender_email
    message["To"] = recipient_email
    message["Subject"] = subject
    message.set_content(body)

    try:
        await aiosmtplib.send(
            message,
            hostname="smtp.gmail.com",
            port=465,
            username=sender_email,
            password=sender_password,
            use_tls=True,
        )
        print("Email sent successfully!")
    except Exception as e:
        print(f"Failed to send email: {e}")

if __name__ == "__main__":
    asyncio.run(send_email_async(
        sender_email="your_email@gmail.com",
        sender_password="your_password",
        recipient_email="recipient@example.com",
        subject="Test Async Email",
        body="Hello, this is a test email sent asynchronously using aiosmtplib!"
    ))
