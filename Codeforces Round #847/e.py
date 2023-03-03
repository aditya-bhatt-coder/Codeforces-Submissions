for i in range(2,536870920,2):
    s = i*2
    fe = i//2
    se = s - fe
    if( fe^se == i ):
        print(i, end=",")

print('done')