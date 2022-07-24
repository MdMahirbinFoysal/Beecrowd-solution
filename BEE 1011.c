#include<stdio.h>
int main()
{
    float R;
    double total=0;
    scanf("%f",&R);
    total=(4.0/3)*(3.14159)*(R*R*R);
    printf("VOLUME = %.3lf\n",total);
    return 0;

}