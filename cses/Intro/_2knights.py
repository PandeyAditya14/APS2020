def solve(i):
    sum_n = ((i**2)*(i**2 -1))//2
    sum_grid = 4*(i-2)*(i-1)
    return sum_n - sum_grid
x = int(input())
for i in range(1,x+1):
    print(solve(i))