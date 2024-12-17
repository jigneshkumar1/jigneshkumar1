# 10) Write a Python program to print custom exceptions.
try:
    num = int(input("Enter the value btween 1 and 50: "))

    if num <1 or num >50:
        raise ValueError ("value should be between 1 and 50")
except ValueError as e:
    print(e)