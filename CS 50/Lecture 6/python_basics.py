from cs50 import get_string

answer = get_string("What's your name? ")
print("hello, "+ answer)

answer = get_string("What's your last name? ")
print(f"hello, {answer}")                   #f-strings or formatting strings tells python string is formatted and not to print curly braces


#loop example
counter = 0
counter+=1

x = 10
y = 8

if x < y:
    print("x is less than y")              #must indent by 4 spaces or one tab or python code won't run at all
elif x > y:
    print("x is greater than y")
else:
    print("x is equal to y")

#while True:                                #infinite loop
    #print("hello,world")


i = 0
while i < 3:
    print("hello, world")
    i += 1


for i in [0, 1, 2]:                     
    print("hello, world2")                  #list in python, similar to an array.  Inefficient way


for i in range(3):                          #most pythonic way to do a loop.  
    print("hello world4")                   #python is a loosely typed languge where types don't have to be used explicitly.  can be inferred implicitly 



#types = bool, float, int, 'str' for strings.

#ranges:
#list:      similar to arrays; automatically resizes itself
#tuple:     comma separated values like x and y coordinates separated by commas
#dict       holds key and values
#set:       a collection of values with NO duplicates





