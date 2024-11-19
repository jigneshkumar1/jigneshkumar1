# • Write a Python program to import the math module and use functions like sqrt(), ceil(), floor(). 

# import math module
import math

# Using sqrt() 
number = int(input("Enter a number: "))
sqrt_result = math.sqrt(number)
print(f"The square root of {number} is: {sqrt_result}")

# Using ceil() 
float_number = 3.14
ceil_result = math.ceil(float_number)
print(f"The ceiling value of {float_number} is: {ceil_result}")

# Using floor() 
float_number_two = 10.5
floor_result = math.floor(float_number_two)
print(f"The floor value of {float_number_two} is: {floor_result}")
