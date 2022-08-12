for _ in range(int(input())):
    s = input()
    m = set()
    ans = 1
    for i in s:
        if len(m)==3 and i not in m:
            ans+=1
            m.clear()
            m.add(i)
        else:
            m.add(i)
    print(ans)