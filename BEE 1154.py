sum=0
count=0
avg=0
while True:
    x=int(input())
    if x<0:
        break
   
    sum=sum+x
    count+=1
avg=sum/count
print("%.2f"%avg)