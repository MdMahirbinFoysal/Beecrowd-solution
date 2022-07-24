#include<stdio.h>
int main()
{
    float a,b,c,x,y,z;
    scanf("%f",&x);
    if(x<=2000)
    {
        printf("Isento\n");
    }
    else if(x>=2000 && x<=3000)
    {
        a=(x-2000.0)*(.08);
        printf("R$ %.2f\n",a);
    }
    else if(x>=3000 && x<=4500)
    {
         a=(3000.0-2000.0)*(.08);

        b=((x-2000.0)-1000.0)*(.18);

        y=a+b;
        printf("R$ %.2f\n",y);
    }
    else if(x>=4500)
    {
        a=(3000.0-2000.0)*(.08);
        b=((4500.0-2000.0)-1000.0)*(.18);
        c=((x-2000.0)-2500.0)*(.28);
        z=a+b+c;
        printf("R$ %.2f\n",z);

    }

    return 0;
}