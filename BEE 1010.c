#include<stdio.h>
int main()
{
    int x,y,x1,y1;
    float z,z1,total,sum=0,sum1=0;
    scanf("%d%d%f",&x,&y,&z);
    scanf("%d%d%f",&x1,&y1,&z1);
    sum=y*z;
    sum1=y1*z1;
    total=sum+sum1;
    printf("VALOR A PAGAR: R$ %.2f\n",total);


    return 0;
}
