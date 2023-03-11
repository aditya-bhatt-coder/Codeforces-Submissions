from collections import defaultdict

for _ in range(int(input())):
    pos = defaultdict(int)
    n, m, d = map(int, input().split())
    p = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    ans = float('inf')

    for i in range(1,n+1):
        pos[p[i-1]] = i

    for i in range(m - 1):
        id1, id2 = pos[a[i]], pos[a[i+1]]
        if id1 > id2:
            ans = 0
            break
        else:
            diff1, diff2 = id2 - id1, float('inf')
            upper, lower = n - id2, id1 - 1
            if d-diff1+1 <= upper + lower:
                diff2 = d-diff1+1
            ans = min(ans, diff1, diff2)

    print(max(ans,0))