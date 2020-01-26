n = int(input())
inp_l=[]
for _ in range(n):
    temp = list(map(int,input().split()))
    for i in temp:
        inp_l.append(i)
# print(inp_l)
inp_S = set(inp_l)
total_S = set(range(1,n+1))
left_out_s = total_S.difference(inp_S)
if len(left_out_s) == 0:
    print(-1)
else:
    for i in left_out_s:
        print(i)