columns=int(input("Enter number of columns:"))
cubes=[]
for i in range(columns):
    x=(int(input("enter number of boxs in {} column".format(i+1))))
    cubes.append(x)
print("Amount of cubes in each of the column after gravity switch")
cubes.sort()
print(cubes)
