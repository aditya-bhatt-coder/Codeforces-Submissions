for i in range(int(input())):
    a1, p1 = map(int,input().split())
    a2, p2 = map(int,input().split())

    if(len(str(a1)) + p1 < len(str(a2)) + p2):
        print('<')
    elif(len(str(a1)) + p1 > len(str(a2)) + p2):
        print('>')
    else:
        if(int(str(a1)+('0'*max(0,p1-p2))) < int(str(a2)+('0'*max(0,p2-p1)))):
            print('<')
        elif(int(str(a1)+('0'*max(0,p1-p2))) > int(str(a2)+('0'*max(0,p2-p1)))):
            print('>')
        else:
            print('=')