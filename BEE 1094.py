a=int(input())
C=0
R=0
S=0                                              
for i in range(a):
    x,y=list(map(str,input().split()))
    x=int(x)
    total=0
    if(y == 'C'):
        C+=x
    elif(y == 'R'):
        R+=x
    elif(y == 'S'):
        S+=x
total=C+R+S
print("Total: {} cobaias".format(total))
print("Total de coelhos:",C)
print("Total de ratos:",R)
print("Total de sapos:",S)
m=0
n=0
o=0
m=(100*C)/total
n=(100*R)/total
o=(100*S)/total
print("Percentual de coelhos: %.2f %%"%m)
print("Percentual de ratos: %.2f %%"%n)
print("Percentual de sapos: %.2f %%"%o)





