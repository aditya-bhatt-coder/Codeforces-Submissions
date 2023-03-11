for _ in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
    a.sort()
    ans = a[-1]
    for i in range(n-1):
        ans -= (a[i+1]-a[i])*(i+1)*(n-i-1)
    print(ans)