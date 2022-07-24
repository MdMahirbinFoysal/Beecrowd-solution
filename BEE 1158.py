x=int(input())
for i in range(x):
    a,b=list(map(int,input().split()))
    if (a%2==1):
        sum=0
        for j in range(1,b+1):
            sum+=a
            a+=2
        print(sum)
        
    else:
        a+=1
        sum=0
        for k in range(1,b+1):
            sum+=a
            a+=2
        print(sum)