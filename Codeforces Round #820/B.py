for _ in range(int(input())):
    n = int(input())
    s = input()
    ans = ""
    a = 'abcdefghijklmnopqrstuvwxyz'
    skip = 0
    for i in range(len(s)-1,-1,-1):
        if(skip>0):
            skip-=1
            continue
        if(s[i]=='0'):
            # print(int(s[i-2]+s[i-1]))
            skip = 2
            ans = a[int(s[i-2]+s[i-1])-1] + ans

        else:
            ans = a[int(s[i])-1] + ans

    print(ans)