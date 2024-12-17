# 9) Write a Python program to handle file exceptions and use the finally block for closing  the file. 

try:
    file =  open("python.txt", "r") 
    content = file.read()
    print(content)
except FileNotFoundError:
    print("Error : file not found")

finally:
    try:
        file.close()
        print("file close")
    except NameError:
        print("file was not open")
