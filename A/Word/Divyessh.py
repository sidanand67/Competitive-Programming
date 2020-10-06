def convert(s: str) -> str:
    n = list(s)
    up = []
    down = []
    for i in n:
        if i.isupper() == True:
            up.append(i)
        elif i.islower() == True:
            down.append(i)
    if len(up) > len(down):
        return s.upper()
    else:
        return s.lower()

if __name__ == "__main__":
    print(convert(str(input().strip())))
