x=0
y=0
while(True):
   try:
      if(x==2):
         break
      a=float(input())
      if(a>=0 and a<=10):
         x=x+1
         y=y+a
      else:
         print("nota invalida")
        
   except EOFError:
       break
b=y/2.0
print("media = %.2f"%b)



