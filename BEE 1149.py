list=input().split()
count=len(list)
a=int(list[0])
for i in range(1,count+1):
    b=int(list[i])
    if b>0:
        c=int(list[i])
        break
x=a+c
sum=0
for i in range(a,x):
    sum+=i
print(sum)