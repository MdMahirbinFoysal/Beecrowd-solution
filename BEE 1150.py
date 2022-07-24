x=int(input())
y=0
while True:
    y=int(input())
    if(y>x):
        break
sum=0
count=0
for i in range(x,y+1):
    sum+=i
    count+=1
    if sum>y:
        break
print(count)
