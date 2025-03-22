from pydub import AudioSegment
from pydub.generators import Sine
import numpy as np

# Function to generate a happy vibe (upbeat)
def happy_vibe():
    frequency = 440  # A4 note
    duration = 3000  # 3 seconds
    tone = Sine(frequency).to_audio_segment(duration=duration)  # Basic sine wave tone
    tone = tone + 6  # Add some volume for happiness
    tone = tone.fade_in(500).fade_out(500)  # Smooth fade-in and fade-out
    tone.export("happy_vibe.wav", format="wav")
    print("Happy Vibe created!")

# Function to generate a sad vibe (lower, slower)
def sad_vibe():
    frequency = 220  # A3 note (lower)
    duration = 6000  # 6 seconds for a more mellow feel
    tone = Sine(frequency).to_audio_segment(duration=duration)
    tone = tone - 6  # Reduce volume for a sadder feel
    tone = tone.fade_in(1000).fade_out(1000)
    tone.export("sad_vibe.wav", format="wav")
    print("Sad Vibe created!")

# Function to generate a calm vibe (soft and soothing)
def calm_vibe():
    frequency = 330  # E4 note (softer)
    duration = 5000  # Longer duration for relaxation
    tone = Sine(frequency).to_audio_segment(duration=duration)
    tone = tone - 4  # Slightly quieter for a calm feel
    tone = tone.fade_in(2000).fade_out(2000)
    tone = tone.low_pass_filter(500)  # Filter out high frequencies for smoothness
    tone.export("calm_vibe.wav", format="wav")
    print("Calm Vibe created!")

# Function to generate an energetic vibe (high tempo)
def energetic_vibe():
    frequency = 523  # C5 note (higher pitch)
    duration = 1000  # 1 second duration for more energy
    tone = Sine(frequency).to_audio_segment(duration=duration)
    tone = tone + 10  # Higher volume for more energy
    tone = tone.fade_in(100).fade_out(100)
    tone = tone * 3  # Repeat the tone to make it more rhythmic
    tone.export("energetic_vibe.wav", format="wav")
    print("Energetic Vibe created!")

# Example of generating different vibes
def generate_vibes():
    happy_vibe()
    sad_vibe()
    calm_vibe()
    energetic_vibe()

# Run the vibe generator
generate_vibes()
