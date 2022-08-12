for _ in range(int(input())):
    #init
    n,m = map(int, input().split())
    a = []
    
    #population
    for i in range(n):
        t = [[int(x),int(x)] for x in input().split()]
        a.append(t)
    
    #driver code

    if(n%2==0 and m%2==0) or (n%2!=0 and m%2!=0):
        print('NO')
        continue
    
    #init first row
    for i in range(1,m):
        a[0][i][0] = a[0][i-1][0] + a[0][i][0]
        a[0][i][1] = a[0][i-1][1] + a[0][i][1]

    #init first column
    for i in range(1,n):
        a[i][0][0] = a[i-1][0][0] + a[i][0][0]
        a[i][0][1] = a[i-1][0][1] + a[i][0][1]

    for i in range(1,n):
        for j in range(1,m):
            a[i][j][0] = min(a[i-1][j][0] + a[i][j][0], a[i][j-1][0] + a[i][j][0])
            a[i][j][1] = max(a[i-1][j][1] + a[i][j][1], a[i][j-1][1] + a[i][j][1])

    if(a[n-1][m-1][0]%2!=0):
        print('NO')
    elif(a[n-1][m-1][0]<=0 and a[n-1][m-1][1]>=0):
        print('YES')
    else:
        print('NO')
    # print(a)