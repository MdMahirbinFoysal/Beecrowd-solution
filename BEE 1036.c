#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,R1,R2,x;
    scanf("%lf%lf%lf",&a,&b,&c);
    x=((b*b)-4*a*c);
    if(x<0)
    {
        printf("Impossivel calcular\n");
    }
    else if(a==0)
    {
        printf("Impossivel calcular\n");

    }
    else
    {
        R1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        R2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }

    return 0;
}