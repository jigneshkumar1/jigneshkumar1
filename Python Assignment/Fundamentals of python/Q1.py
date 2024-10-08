# • Write a Python program to check if a number is positive, negative or 
# zero. 
#Took number input from the user  
num = int(input("Enter the number: "))
# check if the number is greater than zero
if num > 0:
    print("Number is positive") # agr number zero se greater hai to print number is positive
# check if the number is less than zero
elif num < 0:
    print("Number is negative") # agr number zero se less hai to print number is negative
#  if a number is neither greater than zero nor smaller than zero it is equl to zero
else:
    print("Number is zero") # if the number equl to zero hai to else print hoga