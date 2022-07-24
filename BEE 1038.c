#include<stdio.h>
int main()
{
    double x,y;
    scanf("%lf%lf",&x,&y);
    if(x==1)
    {
        printf("Total: R$ %.2lf\n",(4*y));
    }
    else if(x==2)
    {
        printf("Total: R$ %.2lf\n",(y*4.50));
    }
    else if(x==3)
    {
        printf("Total: R$ %.2lf\n",(y*5.00));
    }
    else if(x==4)
    {
        printf("Total: R$ %.2lf\n",(y*2.00));
    }
    else if(x==5)
    {
        printf("Total: R$ %.2lf\n",(y*1.50));
    }
    return 0;

}