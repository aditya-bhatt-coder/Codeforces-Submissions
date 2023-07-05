for _ in range(int(input())):
    n = int(input())

    if n % 2 == 0 :
        print(-1)
        continue

    a = []

    while(n > 1):
        n //= 2
        a.append(1) if n % 2 == 0 else a.append(2)
    
    a = a[::-1]
    print(len(a))
    print(*a)