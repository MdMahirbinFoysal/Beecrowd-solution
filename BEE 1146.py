while True:
    a=int(input())
    x=''
    if a==0:
        break
    for i in range(1,a+1):
       x+=str(i)+" "
    print(x[:-1])
    