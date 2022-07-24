a=int(input())
b=int(input())
if b>a:
        y=0
        for i in range(a,b+1):
            if(i%13 !=0):
                y=y+i
        print(y)
elif a>b:
    z=0
    for i in range(b,a+1):
        if(i%13 !=0):
            z+=i
        print(z)
   
        