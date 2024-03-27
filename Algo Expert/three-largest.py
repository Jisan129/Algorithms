dataset=[4,7,1,119,3,190,2]
three_num=[0,0,0]

for i in range(len(dataset)):
    temp=three_num[0]
    if temp < dataset[i]:
        three_num.remove(three_num[0])
        three_num.append(dataset[i])
    three_num.sort()
    print(three_num)

