for _ in range(int(input())):
    n , p = map(int , input().split())
    # print(n,p)
    arr = list(map(int , input().split()))
    arr2 = [min(p,i) for i in arr]
    print(sum(arr) - sum(arr2))