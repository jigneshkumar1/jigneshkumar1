# • What is the purpose continue statement in python? 

"""In Python, the continue statement is used within loops (like for and while) to skip the current 
iteration and move on to the next one. When the continue statement is encountered, any code 
following it within the loop's body is ignored for that iteration, and the loop proceeds 
with the next cycle.

Example:
Here's a simple example to illustrate its use:"""


for num in range (10):
    if num % 2 == 1:
        continue
    print(num)
