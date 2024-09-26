# • Write a Python program to count the number of characters (character 
# frequency) in a string 

string = input("Enter a string: ")
count_char = {}

for i in string:
    if i in count_char:
        count_char[i] += 1
    else:
        count_char[i] = 1
    
print(count_char)