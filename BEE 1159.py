
while True:
    x=int(input())
    if (x==0):
        break
    elif(x%2==0):
        sum=0
        for i in range(1,6):
            sum+=x
            x+=2
        print(sum)
    else:
        x+=1
        sum=0
        for i in range(1,6):
            sum+=x
            x+=2
        print(sum)

        