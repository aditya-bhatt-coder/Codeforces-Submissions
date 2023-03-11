for _ in range(int(input())):
    n = input()
    a = [int(x) for x in input().split()]

    for i in range(len(a)-1):
        if(a[i] == 1):
            a[i]+=1
    for i in range(len(a)-1):
        while a[i+1]%a[i] == 0:
            a[i+1]+=1

    for e in a:
        print(e, end=' ')
    print()