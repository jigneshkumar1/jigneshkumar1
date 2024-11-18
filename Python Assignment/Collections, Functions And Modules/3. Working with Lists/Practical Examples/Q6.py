# 6) Write a Python program to insert elements into an empty list using a for loop and  append().


#create empty list
my_list = []

num = int(input("Enter the number of elements you want to inser: ")) 
for i in range(num):
    element = input(f"Enter a element {i + 1}: ") # input element
    my_list.append(element) # Append the element in list
print(my_list)


