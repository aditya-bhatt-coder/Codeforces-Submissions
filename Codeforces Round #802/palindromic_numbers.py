for _ in range(int(input())):
    
    l = int(input())
    n = input()
    ans = ''
    
    if n[0]=='9':
        c=0
        for i in range(l-1,-1,-1):
            #last element
            if i==l-1:
                if n[i]=='0':
                    ans = '1' + ans
                elif n[i]=='1':
                    ans = '0' + ans
                else:
                    ans = str( 11-int(n[i]) ) + ans
                    c=1
            #first element
            elif i==0:
                if c==1:
                    ans = '1' + ans
                else:
                    ans = '2' + ans
            #middle element
            else:
                if c==1:
                    if n[i]=='0':
                        ans = '0' + ans
                        c=0
                    else:
                        ans = str( 10-int(n[i]) ) + ans
                        c=1
                else:
                    if n[i]=='0':
                        ans = '1' + ans
                    elif n[i]=='1':
                        ans = '0' + ans
                    else:
                        ans = str( 11-int(n[i]) ) + ans
                        c=1

    else:
        for i in range(l-1,-1,-1):
            ans = str( 9-int(n[i]) ) + ans

    print(ans)