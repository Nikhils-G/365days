import time

# Start the timer
start_time = time.time()

# Function to check if a number is prime
def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

# Generate the first 10 prime numbers
primes = []
n = 2  # Start checking from 2

while len(primes) < 10:
    if is_prime(n):
        primes.append(n)
    n += 1

# End the timer
end_time = time.time()

# Output the result
primes, f"Time taken: {end_time - start_time:.2f} seconds"
