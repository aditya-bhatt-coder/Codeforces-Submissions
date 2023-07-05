for _ in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
    even, odd = 0, 0

    for num in a:
        if(num % 2 == 0):
            even += num
        else:
            odd += num

    print('YES') if(even > odd) else print('NO')