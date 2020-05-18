from collections import Counter
from math import ceil

def calc(x , n):
    x = list(filter(lambda a:a>n,x))
    return ceil((sum(x) - n*len(x))/n)


for _ in range(int(input())):
    lstr , qlen = map(int,input().split())
    qstr = input()
    chct = Counter(qstr)
    ctarr = list(chct.values())
    ctarr.sort(reverse=True)
    ctarr = list(filter((1).__ne__,ctarr))
    # print(ctarr)
    for _ in range(qlen):
        x=int(input())
        print(calc(ctarr,x))
