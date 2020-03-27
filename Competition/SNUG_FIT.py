for _ in range (int(input())):
    siz = int(input())
    length = list(map(int,input().split()))
    breadth = list(map(int,input().split()))
    length.sort(reverse=True)
    breadth.sort(reverse=True)
    sum = 0
    for i , j in zip(length,breadth):
        sum+=min(i,j)
    print(sum)
