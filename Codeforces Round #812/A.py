for _ in range(int(input())):
    n = int(input())
    u,d,l,r = 0,0,0,0
    for i in range(n):
        a,b = map(int, input().split())
        u = max(b,u)
        d = min(b,d)
        l = min(l,a)
        r = max(r,a)
    print((-l+r+u-d)*2)