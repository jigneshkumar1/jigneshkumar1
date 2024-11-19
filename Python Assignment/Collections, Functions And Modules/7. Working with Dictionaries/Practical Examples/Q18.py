# 18) Write a Python program to count how many times each character appears in a string. 

# Input string
my_string = "hello python"

# Create an empty dictionary 
char_count = {}

# Loop through each character
for char in my_string:
    
    if char in char_count:
        char_count[char] += 1
    else:
        char_count[char] = 1

for char, count in char_count.items():
    print(f"'{char}': {count}")
