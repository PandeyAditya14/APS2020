for _ in range(int(input())):
    n = int(input())
    inp_arr = list(map(int,input().split()))
    person = False
    count = 0
    if_violated = False
    for i in inp_arr:
        # print(person,end=" ")
        if (person == False):
            if i == 1:
                person = True
        else:
            if i == 0:
                count+=1
            else:
                if(count < 5):
                    if_violated = True
                    break
                else:
                    count = 0
                    # person = False
    if if_violated:
        print("NO")
    else:
        print("YES")