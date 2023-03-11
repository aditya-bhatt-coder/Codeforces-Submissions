for _ in range(int(input())):
    a = []
    n = int(input())
    for i in range(n):
        a.append(input())
    # print(a)
    
    def solve():
        for i in range(n-2, -1, -1):
            for j in range(n-2, -1, -1):
                if a[i][j] == '1':
                    if a[i+1][j] == '1' or a[i][j+1] == '1':
                        continue
                    else:
                        return "NO"
        return "YES"

    print(solve())