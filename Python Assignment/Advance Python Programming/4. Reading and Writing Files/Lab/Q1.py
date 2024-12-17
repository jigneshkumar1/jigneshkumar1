# • Write a Python program to read the contents of a file and print them on the console.

with open ("python.txt", 'r') as file:
    result = file.read()
    print(result)

