big_n =  1000000007
for _ in range(int(input())):
    n = int(input())
    inp_arr = list(map(int,input().split()))
    inp_arr.sort(reverse=True)
    tot = 0
    for i in range (n):
        if(inp_arr[i] - i > 0):
            tot+=(inp_arr[i] - i)
        else:
            tot+=0
    print(tot % big_n)
