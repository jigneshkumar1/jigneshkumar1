# 17) Write a Python program to convert two lists into one dictionary using a for loop. 

# create two lists
list_1 = ['one', 'two', 'three', 'four']  # key
list_2 = [1, 2, 3, 4]  # value

# Create empty dictionary
my_dict = {}

# Loop through both lists and add key-value pairs to the dictionary
for i in range(len(list_1)):
    my_dict[list_1[i]] = list_2[i]


print(my_dict)
