def digSum(n): 
  
    if (n == 0): 
        return 0
    if (n % 9 == 0): 
        return 9 
    else: 
        return (n % 9) 

for _ in range(int(input())):
    n = int(input())
    chef= 0
    morty = 0
    for _ in range(n):
        ch1 , mo1 = list(map(int,input().split(' ')))
        ch = digSum(ch1)
        mo = digSum(mo1)
        
        if (ch == mo):
            chef+=1
            morty+=1
        elif(ch < mo):
            morty+=1
        else:
            chef+=1
    # print(chef,morty)
    if(chef>morty):
        print("0",chef,sep=" ")
    elif(chef<morty):
        print("1",morty,sep=" ")
    else:
        print("2",morty,sep=" ")