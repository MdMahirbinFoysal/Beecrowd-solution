x=int(input())
a=1
if 1<x<1000:
    for i in range(x):
        print(a,a*a,a*a*a)
        print(a,a*a+1,a*a*a+1)
        a+=1