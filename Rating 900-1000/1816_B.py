for _ in range(int(input())):
    n = int(input())

    a, b = [0] * n, [0] * n
    a[0], b[-1] = n*2, n*2 - 1

    ctr = 1

    for i in range(0, n, 2):
        b[i] = ctr
        a[i + 1] = ctr + 1
        ctr += 2

    for i in range(1, n-1, 2):
        b[i] = ctr
        a[i + 1] = ctr + 1
        ctr += 2

    print(*a)
    print(*b)