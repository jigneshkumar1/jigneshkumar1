# 11) Write a Python program to create a class and access the properties of the class using an object. 

class Bank:
    def __init__(self,name,ac_number):
        self.name = name
        self.ac_number = ac_number


customer_1 = Bank("jignesh", 101)

print(f"Name : {customer_1.name}\nAc. Number : {customer_1.ac_number}")


