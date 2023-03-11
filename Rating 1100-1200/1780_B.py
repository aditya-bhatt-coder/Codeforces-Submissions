# Partitioning the array in 2 parts will give the most optimal solution

import math

for _ in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
    total_sum = sum(a)
    running_sum = 0
    max_gcd = 1

    for num in a[:-1]:
        running_sum += num
        total_sum -= num
        max_gcd = max(math.gcd(running_sum, total_sum), max_gcd)

    print(max_gcd)    