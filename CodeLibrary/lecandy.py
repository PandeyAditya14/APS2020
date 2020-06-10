for _ in range(int(input())):
    tmp = list(map(int,input().split()))
    ls = list(map(int,input().split()))
    if sum(ls)>tmp[1]:
        print("No")
    else:
        print("Yes")