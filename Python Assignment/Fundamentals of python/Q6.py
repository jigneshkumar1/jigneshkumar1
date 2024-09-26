# • Write python program that swap two number with temp variable and 
# without temp variable. 

num1 = int(input("Enter Number one: "))
num2 = int(input("Enter Number two: "))
# with temp variable
temp = num1
num1 = num2
num2 = temp
print(num1)
print(num2)

num1 = int(input("Enter Number one: "))
num2 = int(input("Enter Number two: "))
# without temp variable
num1 = num1 + num2
num2 = num1 - num2
num1 = num1 - num2
print(num1)
print(num2)

