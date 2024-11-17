# Write a Python program to create a list with elements of multiple data types (integers, 
# strings, floats, etc.)

# Creat a list with multiple data types
my_list = [42, "hello", 3.14, True, [1, 2, 3], {'name': 'python'},(1,2,3),{1,2,3}]

print("List with multiple data types:", my_list)

for i in my_list:
    print(f"Item: {i}, Type: {type(i)}")