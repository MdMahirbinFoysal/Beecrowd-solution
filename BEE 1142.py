n = int(input())
c = 1
for i in range(n):
    if((c+3)%4==0):
        a='PUM'
    print(c,c+1,c+2,a)
    c+=4