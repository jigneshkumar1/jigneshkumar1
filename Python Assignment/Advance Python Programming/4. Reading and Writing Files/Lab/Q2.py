# # • Write a Python program to write multiple strings into a file. 

# define the list 

strings = ["python",
          "django",
          "flask",
          "numpy",
          "pandas"
          ]

with open ("frame.txt" ,'w') as file:
    for string in strings:
        file.write(string + '\n')

