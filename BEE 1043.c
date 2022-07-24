#include<stdio.h>
int main()
{
    float a,b,c,te,tm;
    scanf("%f%f%f",&a,&b,&c);
    if(a<b+c && b<a+c && c<a+b)
    {
        te=a+b+c;
    printf("Perimetro = %.1f\n",te);
     }
     else
     {
         tm=((a+b)*c)/2;
         printf("Area = %.1f\n",tm);
     }

     return 0;
    }