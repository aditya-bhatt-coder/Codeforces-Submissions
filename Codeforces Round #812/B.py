for _ in range(int(input())):
    
    n = int(input())
    nums = [int(x) for x in input().split()]
    
    mx = nums[0]
    mi = 0
    ans = True
    
    for i in range(1,n):
        if(mx<nums[i]):
            mx = nums[i]
            mi = i
    
    for i in range(mi-1,-1,-1):
        if(nums[i]>nums[i+1]):
            ans = False
            break
    
    for i in range(mi+1,n):
        if(nums[i-1]<nums[i]):
            ans = False
            break

    print("YES") if ans else print("NO")