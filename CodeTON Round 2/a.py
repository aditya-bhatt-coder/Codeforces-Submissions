for _ in range(int(input())):
    m,n = map(int,input().split())
    a = input()
    b = input()
    if(a==b):
        print("YES")
        continue
    f = False
    while(m>n and len(a)>1):
        tf = int(b[0])
        if(tf==1):
            a = str(max(int(a[0]),int(a[1]))) + a[2:]
        else:
            a = str(min(int(a[0]),int(a[1]))) + a[2:]
        
        if(a==b):
            f = True
            break
    
    print("YES") if f else print("NO")