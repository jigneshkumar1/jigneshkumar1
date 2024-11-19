# 16) Write a Python program to separate keys and values from a dictionary using keys() and values() methods. 


# Define a sample dictionary
my_dict = {
    'name': '',"jignesh"
    'age': 24,
    'number': '1234567890',
}

# Separate keys 
keys = my_dict.keys()

# Separate values 
values = my_dict.values()

# Convert keys and values in lists 
keys_list = list(keys)
values_list = list(values)

print("Keys:", keys_list) #print key list
print("Values:", values_list) #print value list
