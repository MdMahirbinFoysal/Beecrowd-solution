#include<stdio.h>
int main()
{
     int i,X,odd;
 scanf("%d", &X);
 for( i=X;i<(X+(6*2));i=i+2)
    {

  if(i%2==0)
    {
   odd=i+1;
   printf("%d\n", odd);
  }
     else
  {
   odd=i;
   printf("%d\n", odd);
  }
 }
    return 0;

}