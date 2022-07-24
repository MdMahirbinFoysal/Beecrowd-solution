z=1
a,b=list(map(int,input().split()))
if(1<a<20) and (a<b<100000):
    for i in range(1,int((b/a)+1)):
        print(z,z+1,z+2)
        z+=3
