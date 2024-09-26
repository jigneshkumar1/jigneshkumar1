#  Write a Python function to insert a string in the middle of a string. 

string = "Welcome python "
insert_string = " to "
result = len(string) // 2
ans = string[:result] + insert_string + string[result:]
print(ans)