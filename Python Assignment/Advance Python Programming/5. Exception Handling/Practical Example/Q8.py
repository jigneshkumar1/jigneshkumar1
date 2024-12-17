# 8)  Write a Python program to handle multiple exceptions (e.g., file not found, division by zero). 

def handle_multiple_exceptions():
    try:
        # ZeroDivisionError handling
        print(" 1) Attempting to divide by zero...")
        return 10 / 0
    except ZeroDivisionError as result:
        print(f"Error: {result} (Cannot divide by zero)")
    try:
        # FileNotFoundError handling
        print("\n 3) Attempting to open a non existing file!")
        with open ("python.txt", 'r') as file:
            content  =  file.read()
        
    except FileNotFoundError as result:
        print(f"Error: {result} (file not found)\n")

handle_multiple_exceptions()
