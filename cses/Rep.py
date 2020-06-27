dna = input()
max_sz = 0
prev_symbol = dna[0]
curr_sz = 0
for i in dna:
    curr_symbol = i
    if curr_symbol == prev_symbol:
        curr_sz+=1
    else:
        max_sz= max(max_sz,curr_sz)
        curr_sz = 1
    prev_symbol = curr_symbol

max_sz = max(max_sz,curr_sz)
print(max_sz)
        