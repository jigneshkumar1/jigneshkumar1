# • Write a Python program to get the Fibonacci series of given range. 
f1 = 0
f2 = 1
num = int(input("Enter the  number: "))
if num <=0:
    print("Enter the positive number")
elif num == 1:
    print(f1)
else:
    print(f1,end=" ")
    print(f2,end=" ")
    for i in range (1,num):
        f3 = f1 + f2
        print(f3,end=" ")
        f1=f2
        f2=f3
        



