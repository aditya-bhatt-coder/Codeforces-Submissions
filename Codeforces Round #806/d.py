for _ in range(int(input())):
    n = int(input())
    l,st = [],set()
    ans = ''
    for i in range(n):
        str = input()
        l.append(str)
        st.add(str)
    for s in l:
        if(len(s)==1):
            ans+='0'
        else:
            f = False
            for i in range(1,len(s)):
                if s[:i] in st and s[i:] in st:
                    f = True
                    ans += '1'
                    break
            if not f:
                ans += '0'
    print(ans)