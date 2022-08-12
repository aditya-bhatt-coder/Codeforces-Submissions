for _ in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
    a.sort()
    s = set(a)
    if(a[0]+a[1]+a[2] in s and a[-1]+a[-2]+a[-3] in s):
        print('YES')
    else:
        print('NO')