for _ in range(int(input())):
    n, x1, y1, x2, y2 = map(int, input().split())
    
    n = n // 2
    if(x1 > n):
        x1 = (n) - (x1 - n) + 1
    if(x2 > n):
        x2 = (n) - (x2 - n) + 1
    if(y1 > n):
        y1 = (n) - (y1 - n) + 1
    if(y2 > n):
        y2 = (n) - (y2 - n) + 1

    start = min(x1, y1)
    end = min(x2, y2)

    print(abs(start - end))