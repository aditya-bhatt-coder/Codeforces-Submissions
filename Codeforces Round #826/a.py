for _ in range(int(input())):
    l = input().split()
    a = l[0]
    b = l[1]
    n1,n2 = 0,0 
    if 'S' in a:
        n1 = 0
    if 'S' in b:
        n2 = 0
    if 'M' in a:
        n1 = 1
    if 'M' in b:
        n2 = 1
    if 'L' in a:
        n1 = 2
    if 'L' in b:
        n2 = 2

    if(n1<n2):
        print('<')

    elif n1>n2:
        print('>')
    
    else:
        if a==b:
            print('=')
        else:
            if n1 == 0:
                x1,x2 = 0,0
                for i in a:
                    if i=='X':
                        x1+=1
                for i in b:
                    if i=='X':
                        x2+=1
                if(x1<x2):
                    print('>')
                elif(x1>x2):
                    print('<')
                else:
                    print('=')
            elif n1==2:
                x1,x2 = 0,0
                for i in a:
                    if i=='X':
                        x1+=1
                for i in b:
                    if i=='X':
                        x2+=1
                if(x1<x2):
                    print('<')
                elif(x1>x2):
                    print('>')
                else:
                    print('=')
            else:
                print('=')