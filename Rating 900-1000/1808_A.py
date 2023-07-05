for _ in range(int(input())):
    a, b = map(int, input().split())

    def f(x):
        mn, mx = 9, 0
        while(x):
            r = x % 10
            mn = min(mn, r)
            mx = max(mx, r)
            x //= 10
        return mx - mn    
    
    def solve():
        ans, cost = a, f(a)
        # print(cost)
        for i in range(a, b + 1):
            val = f(i)
            if(val == 9):
                print(i)
                return
            if(val > cost):
                ans, cost = i, val

        print(ans)

    solve()