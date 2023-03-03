for _ in range(int(input())):
    n = int(input())
    s = input()
    ans = 0

    for i in range(1, n):
        if i == 1:
            ans+=1
        elif s[i] == s[i-2]:
            continue;
        else:
            ans+=1
    
    print(ans)