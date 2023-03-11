a = [[j+(i*256) for j in range(256)] for i in range(256)]

for _ in range(int(input())):
    x, y = map(int, input().split())
    print(x * y)
    for i in range(x):
        for j in range(y):
            print(a[i][j], end=' ')
        print()