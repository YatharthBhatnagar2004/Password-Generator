import random
import time

# List of sample sentences for the game
sentences = [
    "The quick brown fox jumps over the lazy dog.",
    "Programming is fun and challenging.",
    "Practice makes perfect.",
    "Python is a versatile programming language."
]

def get_random_sentence():
    return random.choice(sentences)

def calculate_typing_speed(start_time, end_time, input_text):
    elapsed_time = end_time - start_time
    words = input_text.split()
    word_count = len(words)
    speed = word_count / (elapsed_time / 60)  # Words per minute
    return speed

def main():
    print("Welcome to the Typing Speed Game!")
    input("Press Enter to start...")
    
    sentence = get_random_sentence()
    print("\nType the following sentence as quickly and accurately as possible:")
    print(sentence)
    
    input("Press Enter when you're ready to start typing...")
    
    start_time = time.time()
    user_input = input("Type the sentence: ")
    end_time = time.time()
    
    typing_speed = calculate_typing_speed(start_time, end_time, user_input)
    
    print("\nTyping speed: {:.2f} words per minute".format(typing_speed))
    
    accuracy = sum([1 for x, y in zip(sentence.split(), user_input.split()) if x == y]) / len(sentence.split()) * 100
    print("Accuracy: {:.2f}%".format(accuracy))
    
    if accuracy >= 90 and typing_speed >= 30:
        print("Great job!")
    else:
        print("Keep practicing!")

if __name__ == "__main__":
    main()
