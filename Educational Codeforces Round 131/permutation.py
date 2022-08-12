for _ in range(int(input())):
    n = int(input())
    ans = set()
    print(2)
    for i in range(1,n+1):
        t = i
        while t not in ans and t<=n:
            print(t,end=' ')
            ans.add(t)
            t*=2
    print()