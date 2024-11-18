# 4) Write a Python program to remove elements from a list using pop() and 
# remove().


my_list = [1, 2.0, ['python'], {'age': 24,},'hello world']


# remove element  using pop()
my_list.pop()  # default remove last element [-1] 
my_list.pop(1) #remove element with indexing 

# remove element using remove() method
my_list.remove(['python']) #  Using remove() to remove element by value

print(my_list)