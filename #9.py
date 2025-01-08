# A code to symbolize moving forward
def move_on(love_failure_count):
    if love_failure_count > 0:
        print("It hurts, but life goes on. Time to heal and grow stronger!")
        # Focus on self-improvement
        for _ in range(love_failure_count):
            print("Building a better version of myself...")
    else:
        print("Keep thriving and enjoying the journey!")

# You've experienced 2 love failures, but you're stronger now
move_on(2)
