for _ in range(int(input())):
    s = input()
    f = False
    for i in range(len(s)-2,-1,-1):
        if(int(s[i])+int(s[i+1])>9):
            s = s[:i] + str(int(s[i])+int(s[i+1])) + s[i+2:]
            f = True
            break;
    if(not f):
        s = str(int(s[0])+int(s[1])) + s[2:]
    print(s)