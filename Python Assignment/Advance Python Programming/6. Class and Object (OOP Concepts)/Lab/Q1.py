# create class
class Find_factorial():
    def __init__(self,num,factorial = 1):
        for i in range(1,num+1):
            factorial*=i
            self.factorial = factorial


# create object
fact = Find_factorial(5)

print(fact.factorial)



        
            
        