for _ in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
    if(a[-1]==0):
        # print("IF")
        for i in range(1,n+2):
            print(i, end=' ')
        print()
    elif(a[0]==1):
        print(n+1, end=' ')
        for i in range(1,n+1):
            print(i, end=' ')
        print()
    else:
        f = False
        ans = []
        for i in range(n-1):
            ans.append(i+1)
            if(a[i]==0 and a[i+1]==1 and not f):
                f = True
                ans.append(n+1)
        if(f):
            ans.append(n)
            for x in ans:
                print(x, end=' ')
            print()
        else:
            print(-1)