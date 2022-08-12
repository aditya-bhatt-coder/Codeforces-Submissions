for _ in range(int(input())):
    n = int(input())
    a = [int(c) for c in input().split()]
    s = min(a)
    ans = 0
    for i in a:
        ans += i-s
    print(ans)