for _ in range(int(input())):
    s = input()
    h = int(s[0:2])
    m = int(s[3:5])
    r = int(s[6:])
    incm = r%60
    inch = r//60
    visited = []
    # print(h,m,r,inch,incm)
    ans = 0
    if(r==1):
        print(16)
        continue
    pal = ['0000','0110','0220','0330','0440','0550','1001','1111','1221','1331','1441','1551','2002','2112','2222','2332']
    while(True):
        htime = ''
        mtime = ''
        if(h==0):
            htime = '00'
        elif(h<10):
            htime = '0'+str(h)
        else:
            htime = str(h)
        if(m==0):
            mtime = '00'
        elif(m<10):
            mtime = '0'+str(m)
        else:
            mtime = str(m)
        
        time = htime+mtime
        # print(time)

        if(time in visited):
            break
        if(time in pal):
            ans+=1
        visited.append(time)
        if(m+incm>=60):
            m = (m+incm)%60
            h = (h+1)%24
        else:
            m = m+incm
        h = (h+inch)%24
    print(ans)