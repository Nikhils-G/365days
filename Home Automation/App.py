# Import necessary libraries
from flask import Flask, render_template, request
import RPi.GPIO as GPIO

# Set up Flask app
app = Flask(__name__)

# Configure GPIO pins
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

# Define pins for devices
DEVICE_PINS = {
    "light": 18,  # GPIO pin 18 for light
    "fan": 23,    # GPIO pin 23 for fan
}

# Set up pins as output
for pin in DEVICE_PINS.values():
    GPIO.setup(pin, GPIO.OUT)
    GPIO.output(pin, GPIO.LOW)

# Home route
@app.route('/')
def home():
    return render_template("home.html")  # Serve an HTML page for controls

# Route to control devices
@app.route('/control', methods=['POST'])
def control():
    device = request.form['device']
    action = request.form['action']
    
    if device in DEVICE_PINS:
        pin = DEVICE_PINS[device]
        if action == "on":
            GPIO.output(pin, GPIO.HIGH)
        elif action == "off":
            GPIO.output(pin, GPIO.LOW)
    return "OK"

# Clean up GPIO on exit
@app.teardown_appcontext
def cleanup(exception=None):
    GPIO.cleanup()

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)
