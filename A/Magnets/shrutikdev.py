#function to count the magnet groups
def counting(a,b):
    count=1

    for i in range(1,a):

        if b[i] != b[i-1]:
            count +=1

    return count
#drivercode
if __name__ == "__main__":
    #input
    a=6 
    b=["10","10","10","01","10","10",]
    print(counting(a,b))
