# 12) Write a Python program to demonstrate the use of local and global variables in a class.

#global variable

global_var = 20

class Python:
    def show_variables(self):
        local_var = 20

        global global_var
        global_var+=5   # modify global varible

        print(f"Local variable: {local_var}")
        print(f"Global variable after modified in class: {global_var}")

obj = Python()
obj.show_variables()