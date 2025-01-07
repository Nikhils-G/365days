import nltk
from nltk.chat.util import Chat, reflections

# Pairs of input patterns and corresponding responses
pairs = [
    [
        r"my name is (.*)",
        ["Hello %1, how can I help you today?",]
    ],
    [
        r"hi|hello|hey",
        ["Hello!", "Hi there!", "Hey! How can I assist you?"]
    ],
    [
        r"how are you ?",
        ["I'm just a bot, but I'm doing fine! How about you?"]
    ],
    [
        r"what is your name ?",
        ["I am a chatbot. You can call me ChatGPT!",]
    ],
    [
        r"quit",
        ["Goodbye! Have a great day!"]
    ],
]

# Initialize the chatbot
chatbot = Chat(pairs, reflections)

# Start the conversation
print("Chatbot: Hello! Type 'quit' to exit.")
chatbot.converse()
