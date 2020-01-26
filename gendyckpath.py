from itertools import product

def solve(num, cache={0: ['']}):
    if num not in cache:
        cache[num] = ['X%sY%s' % t for i in range(1, num + 1)
            for t in product(solve(i - 1), solve(num - i))]
    return cache[num]

inp = int(input())
for s in solve(inp):
    print(s)