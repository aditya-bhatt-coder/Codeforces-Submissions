for _ in range(int(input())):
    n = int(input())

    if n % 2 == 0:
        print("NO")
        continue

    print('YES')
    ctr = 2 * n
    for i in range(1,n+1,2):
        print(i, ctr)
        ctr-=1

    for i in range(2,n+1,2):
        print(i, ctr)
        ctr-=1