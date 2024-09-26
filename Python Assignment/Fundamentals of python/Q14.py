"""
Negative indexes are a way to access elements in a data structure, like a list or an array,
by counting from the end rather than the beginning. In many programming languages (like Python)
a negative index means you start counting backwards. For example, in a list:

list[-1] refers to the last element.
list[-2] refers to the second-to-last element.

1) Why Use Negative Indexes?

1. Convenience: They allow easy access to elements from the end of the list without needing 
to know the total length.
  
2. Readability: Code can be clearer when you want to focus on the end of the data structure.

3. Flexibility: It simplifies operations like retrieving the last few elements, especially in dynamic or unknown-length lists.

Overall, negative indexes are a handy feature that can make your code cleaner and more intuitive!
"""


# Example

str1 = "jignesh"
result = str1[-4:]
print(result)

