
# input format: rows followed by cols followed by numbers
r=input().split()
b=r[2:]
l1=[[ int(b[int(r[1])*i+j]) for j in range(int(r[1])) ] for i in range(int(r[0]))]
 
 
rowstart=0
colstart=0
rowend=len(l1)-1
colend=len(l1[0])-1
x=1
 
ans = []
 
while(x<=(len(l1)*len(l1[0]))):
      for i in range(colstart,colend+1):
            ans.append(l1[rowstart][i])
            x=x+1
      rowstart=rowstart+1
 
      for i in range(rowstart,rowend+1):
            ans.append(l1[i][colend])
            x=x+1
      colend=colend-1
 
 
      for i in range(colend,colstart-1,-1):
            ans.append(l1[rowend][i])
            x=x+1
      rowend=rowend-1
 
 
      for i in range(rowend,rowstart-1,-1):
            ans.append(l1[i][colstart])
            x=x+1
      colstart=colstart+1

print(ans)
