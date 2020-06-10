len  =  int(input())
total = len*(len-1)//2 -90

glob = [[]]*(len+1)
indices = []
for _ in range(10):
    inp = list(map(int,input().split()))
    glob[inp[0]] = inp[1:]
    indices.append(inp[0])

for i in indices:
    temp =  list(set(indices).intersection(set(glob[i])))
    for j in temp:
        if i in glob[j]:
            glob[j].remove(i)
            total+=1

print(total)
