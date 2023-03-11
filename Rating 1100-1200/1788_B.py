for _ in range(int(input())):
    s = input()
    turn = 1
    a, b = '', ''

    for digit in s:
        d = int(digit)
        if(d % 2 == 0):
            a += str(d//2)
            b += str(d//2)
        else:
            if(turn == -1):
                a += str(d//2+1)
                b += str(d//2)
            else:
                a += str(d//2)
                b += str(d//2+1)
            turn *= -1
    
    print(int(a), int(b))