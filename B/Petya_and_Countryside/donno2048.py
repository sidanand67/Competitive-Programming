'''
Problem: Petya and Countryside
Problem Link: http://codeforces.com/contest/66/problem/B
Language: Python
'''
def output(x:str,y:str)->None:
    sections = int(x) # takes the number of sections
    heights=[int(i) for i in y.split(' ')] # takes the heights of the sections
    scores=[] # create list of amount of watered sections for each section watering
    for i in range(sections): # loops on all the sections to create the scores list
        score=-1 # initiate the score at -1 so you can count the i-th section twice (left & right)
        height_l=heights[i] # the lowest height from the left
        height_r=heights[i] # the lowest height from the right
        for j in range(i+1): # cycle over sections from the left
            if heights[i-j]<=height_l: # only if the height of this section
                score+=1
                height_l=heights[i-j] # readjusted the lowest height from the left
            else:break # stop when a section is too high
        for j in range(sections-i): # cycle over sections from the right
            if heights[i+j]<=height_r:
                score+=1
                height_r=heights[i+j] # readjusted the lowest height from the right
            else:break # stop when a section is too high
        scores+=[score]
    print(max(scores)) # print the maximum number of the sections
while True:output(input('Number of sections: '),input('Height of the sections (divided with spaces): '))
