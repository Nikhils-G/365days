import yagmail

def send_email_yagmail(sender_email, sender_password, recipient_email, subject, body):
    try:
        yag = yagmail.SMTP(sender_email, sender_password)
        yag.send(to=recipient_email, subject=subject, contents=body)
        print("Email sent successfully!")
    except Exception as e:
        print(f"Failed to send email: {e}")

# Example usage
send_email_yagmail(
    sender_email="your_email@gmail.com",
    sender_password="your_password",
    recipient_email="recipient@example.com",
    subject="Test Email",
    body="Hello, this is a test email sent from Python using yagmail!"
)
