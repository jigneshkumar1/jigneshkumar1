# • Write a Python program to demonstrate handling multiple exceptions. 

def handle_multiple_exceptions():
    try:
        # ZeroDivisionError handling
        print(" 1) Attempting to divide by zero...")
        return 10 / 0
    except ZeroDivisionError as result:
        print(f"Error: {result} (Cannot divide by zero)")

    try:
        # ValueError handling
        print("\n 2) Attempting to convert string to integer")
        num = int("hello")

    except ValueError as result:
        print(f"Error: {result} (invalid input...!)")

    try:
        # FileNotFoundError handling
        print("\n 3) Attempting to open a non existing file!")
        with open ("python.txt", 'r') as file:
            content  =  file.read()
        
    except FileNotFoundError as result:
        print(f"Error: {result} (file not found)\n")

handle_multiple_exceptions()
