# The first question for SAP scholar 2019 was to extract number in a string and fornd the total sum 
for _ in range(int(input())):
    temp=input()
    flag = 0
    num=[0]*1000000
    index = 0
    number_arr=['1','2','3','4','5','6','7','8','9','0']
    for i in temp:
        if i in number_arr:
            if flag == 0:
                flag =1 
                num[index]=int(i)
            else:
                num[index] = num[index]*10 + int(i)
        else:
            if flag == 1:
                index+=1
                flag=0
    print(sum(num))