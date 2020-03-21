from collections import defaultdict

for _ in range( int( input() ) ):
    count_dict = defaultdict(int)
    inp=list( map(int,input().split()))
    n , m = inp[0] , inp[1]
    fr = list(map(int , input().split()))
    val = list(map(int,input().split()))
    for i in range(n):
        count_dict[fr[i]]+=val[i]
    res =  [key for key in count_dict if 
        all(count_dict[temp] >= count_dict[key] 
        for temp in count_dict)]
    print(count_dict[res[0]])
