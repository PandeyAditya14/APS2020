for _ in  range(int(input())):
    vals = list(map(int,input().split()))
    arr =  list(map(int,input().split()))
    print(sum(arr)%vals[1])