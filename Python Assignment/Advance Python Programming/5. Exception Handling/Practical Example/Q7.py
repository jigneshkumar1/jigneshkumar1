# 7) Write a Python program to handle exceptions in a calculator.
def add(x, y):
    return f"{x} + {y} = {x + y}"

def subtract(x , y):
    return f"{x} - {y} = {x - y}"

def multiply(x, y):
    return f"{x} * {y} = {x * y}"

def divide(x, y):
    try:
        return f"{x} / {y} = {x / y}"
    except ZeroDivisionError as result:
        return "Error: {result} (Division by zero is not allowed.)"
    
def get_input():
    try:
        num1 =int(input("Enter the first number: "))
        num2 =int(input("Enter the second number: "))
        return num1 , num2
    except ValueError as result:
        print(f"Error: {result} (Invalid input. Please enter numerical values.)")


while True:
    choise  = input("Enter your choise: [+ , - , * , /] and  E for exit : ").lower()
    num1,num2 = get_input()
    if choise == "e":
        print("Exit!!")
        break
    if choise == "+":
        print(add(num1,num2))
    elif choise == "-":
        print(subtract(num1,num2))
    elif choise == "*":
        print(multiply(num1,num2))
    elif choise == "/":
        print(divide(num1,num2))

        



            


