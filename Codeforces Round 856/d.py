for _ in range(int(input())):
    fake = input()
    n, k = map(int, input().split())
    l = [1<<31] * n

    # populating array with AC
    for pt, tp in zip(map(int, input().split()),map(int, input().split())):
        l[pt-1] = tp

    # filling up the prefix
    for i in range(1,n):
        l[i] = min(l[i-1]+1, l[i])
    # filling up the suffix
    for i in range(n-2, -1, -1):
        l[i] = min(l[i], l[i+1]+1)

    print(*l)