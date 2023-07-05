for _ in range(int(input())):
    n, d = map(int, input().split())
    num = input()
    ok = False

    for c in num:
        if(d > int(c) and not ok):
            print(d, end="")
            ok = True
        print(c, end="")

    if(not ok):
        print(d)

    else:
        print()