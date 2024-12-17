# • Write a Python program to handle exceptions in a simple calculator (division by zero, invalid input).

num1 = int(input("Enter a number: "))
num2 = int(input("Enter a number: "))

try: 
    print(num1/num2)

except ZeroDivisionError:
    print("Cannot divide by zero")
except:
    print("someting went wrong") 
