for _ in range(int(input())):
    s1, s2, ans = set(), set(), True
    n = int(input())
    for i in range(n):
        a, b = map(int, input().split())
        if a==b:
            ans = False
        elif a in s1 or b in s1:
            if a in s2 or b in s2:
                ans = False
            else:
                s2.add(a)
                s2.add(b)
        else:
            s1.add(a)
            s1.add(b)
    
    print('YES') if ans else print('NO')