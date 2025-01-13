# Baahubali Movie Information Program

# Dictionary containing movie details
baahubali_info = {
    "Title": "Baahubali: The Beginning",
    "Director": "S. S. Rajamouli",
    "Producer": "Shobu Yarlagadda, Prasad Devineni",
    "Writer": "V. Vijayendra Prasad",
    "Cast": [
        "Prabhas as Baahubali/Shivudu",
        "Rana Daggubati as Bhallaladeva",
        "Anushka Shetty as Devasena",
        "Tamannaah as Avanthika",
        "Sathyaraj as Kattappa",
        "Ramya Krishnan as Sivagami"
    ],
    "Release Year": 2015,
    "Language": ["Telugu", "Tamil"],
    "Genre": ["Action", "Drama", "Fantasy"],
    "Box Office": "$91 million worldwide"
}

# Function to display movie information
def display_movie_info(movie_dict):
    print("Baahubali Movie Details:")
    print("-" * 30)
    for key, value in movie_dict.items():
        if isinstance(value, list):
            print(f"{key}:")
            for item in value:
                print(f"  - {item}")
        else:
            print(f"{key}: {value}")
    print("-" * 30)

# Main program execution
if __name__ == "__main__":
    display_movie_info(baahubali_info)
