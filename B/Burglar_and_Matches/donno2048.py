'''
Problem: Burglar and Matches
Problem Link: http://codeforces.com/contest/16/problem/B
Language: Python
'''
def steal():
    n,m=input('n and m (separated with space): ').split(' ')
    ab=[[int(i) for i in input('ai and bi (separated with space): ').split(' ')] for _ in range(int(m))] # take ai's and bi's
    total=0 # initialize the total number of matches
    for i in range(int(n)):
        matches=[]
        for j in range(int(m)): # for every container add its matches to the list if there are any
            if ab[j][0]>0:
                matches+=[ab[j][1]]
            else: # if there are none add zero to the list
                matches+=[0]
        ab[matches.index(max(matches))][0]-=1 # subtract one matchboxes from the container with the biggest amount of matches
        total+=max(matches) # add them to the total number of matches
    print(total)
while True:steal() # give it inputs over and over
