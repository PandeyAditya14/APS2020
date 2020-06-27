def ret_sum(n):
    return(((1+n)*(n))//2)
n = int(input())
arr = list(map(int,input().split()))
print(ret_sum(n) - sum(arr))