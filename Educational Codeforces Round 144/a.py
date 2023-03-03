tc = int(input())

t = "FBFFBFFBFBFFBFFBFBFFBFFB"

for _ in range(tc):
    n = int(input())
    s = input()
    if s in t:
        print("YES")
    else:
        print("NO")