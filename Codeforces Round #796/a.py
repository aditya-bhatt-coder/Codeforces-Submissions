for _ in range(int(input())):
    x = int(input())
    for y in range(1,2**31):
        if(x&y>0 and x^y>0):
            print(y)
            break