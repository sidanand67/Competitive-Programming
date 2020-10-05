'''
Problem: Anton and Danik
Problem Link: http://codeforces.com/contest/734/problem/A
Language: Python
'''
def output(x:str,y:str)->None:
    relevant = y[:int(x)] # define a new parameter to ignore unrelevant games
    if relevant.count('A')>relevant.count('D'):print('Anton')
    elif relevant.count('A')!=relevant.count('D'):print('Danik')
    else:print('Friendship')
while True:
    output(input('n: '),input('s: ')) # you can give inputs again and again...
