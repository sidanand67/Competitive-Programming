"""
 
  Problem- Beautiful Matrix
  Platform- Codeforces
  Problem Link- http://codeforces.com/contest/263/problem/A
  Language- Python
 
 """

for i in range(0,5):
    a=list(map(int,input().split()))
    for j in range(0,5):
        if(a[j]==1):
            x=3-i-1
            y=3-j-1
            break

print(abs(x)+abs(y))
