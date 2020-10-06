def convert(s: str) -> str:
    # converting the string to list 
    n = list(s)
    up = []
    down = []
    # loop for seperation of string
    for i in n:
        if i.isupper() == True:
            up.append(i)
        elif i.islower() == True:
            down.append(i)
    # checking case for conversion
    if len(up) > len(down):
        return s.upper()
    else:
        return s.lower()

if __name__ == "__main__":
    print(convert(str(input().strip())))
