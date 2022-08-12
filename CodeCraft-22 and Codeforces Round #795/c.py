def calcSum(s,n):
    sum = 0
    for i in range(n-1):
        # print(s[i]+s[i+1])
        sum+=int(s[i]+s[i+1])
    return sum

for _ in range(int(input())):
    n,k = map(int,input().split())
    s = input()

    for i in range(n-1,-1,-1):
        if(s[i]=='1' and i!=n-1):
            if(n-1-i<=k):
                k-=n-1-i
                s = s[:i]+s[-1]+s[i+1:n-1]+s[i]
                # (s[i],s[-1])=(s[-1],s[i])
                break
    # print(s)
    for i in range(n-1):
        if(s[i]=='1'):
            if(i<=k and i!=0):
                k-=i
                s = s[i]+s[1:i]+s[0]+s[i+1:]
                # (s[i],s[0])=(s[0],s[i])
                break
    # print(s)
    print(calcSum(s,n))