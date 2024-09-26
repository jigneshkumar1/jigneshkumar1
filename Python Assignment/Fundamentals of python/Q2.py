# • Write a Python program to get the Factorial number of given number.
fact = 1

num = int(input("Enter a number: "))
for i in range (1,num+1):
    fact *=i
print(fact)
