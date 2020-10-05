'''
Problem: Petya and Strings
Problem Link: http://codeforces.com/contest/112/problem/A
Language: Python
'''
def output(x:str,y:str)->None:
    lx = x.lower() # define a new parameter to ignore letter cases 
    ly = y.lower() # define a new parameter to ignore letter cases
    print('-'*(lx<ly)+'1'*(lx!=ly)+'0'*(lx==ly)) # print the minus sign only if x is bigger and 1 only if they're different
while True:
    output(input('Give me the first string: '),input('Give me the first second: ')) # you can give it the first and second strings again and again...
