# 6) Write a Python program to check the current position of the file cursor using tell().

with open ('position.txt', 'r') as file:
    content = file.read(15)
    position = file.tell()
    print(f"read file word : ",content)
    print("Current file cursor position:", position)

