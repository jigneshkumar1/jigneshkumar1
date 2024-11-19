# • Write a Python program to create a calculator using functions. 

# add two numbers
def add(x, y):
    return x + y

# subtract two numbers
def subtract(x, y):
    return x - y

# multiply two numbers
def multiply(x, y):
    return x * y

# divide two numbers
def divide(x, y):
    if y != 0:
        return x / y
    else:
        return "! Division by zero."

# Main program logic
def calculator():
    print("Simple Calculator")

    # input for operation
    operation = input("Choose operation (+, -, *, /): ")

    # input  numbers
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))

    # Perform the operation
    if operation == '+':
        print(f"{num1} + {num2} = {add(num1, num2)}")
    elif operation == '-':
        print(f"{num1} - {num2} = {subtract(num1, num2)}")
    elif operation == '*':
        print(f"{num1} * {num2} = {multiply(num1, num2)}")
    elif operation == '/':
        print(f"{num1} / {num2} = {divide(num1, num2)}")
    else:
        print("Invalid operation!")

# Run the calculator
if __name__ == "__main__":
    calculator()
