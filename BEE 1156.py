avg=0
sum=0
z=1
for i in range(1,39,2):
    avg=i/z
    sum+=avg
    z*=2   
print("%.2f"%sum)
    