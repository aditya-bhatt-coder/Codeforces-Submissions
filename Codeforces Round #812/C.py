import math

def ps(x):
    if(x >= 0):
        sr = int(math.sqrt(x))
        return ((sr*sr) == x)
    return False

for _ in range(int(input())):

    n = sz = int(input())
    n-=1
    ans = []
    vis = [False for i in range(sz)]

    while(len(ans)!=sz):
        ctr = 0
        for i in range(sz):
            if ps(i+n) and vis[i]==False:
                ctr = i
                # print(ctr)
                break
        
        while ps(ctr+n) and ctr<sz and n>-1:
            if(vis[ctr]==False):
                ans.append(ctr)
                vis[ctr] = True
                ctr+=1
                n-=1
                # print(ans)
            else:
                break

    for i in range(sz-1,-1,-1):
        print(ans[i],end=' ')
    print()