#include <stdio.h>
int main()
{
    double i,a,b,c,avg=0;
    int N;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        avg=((a*2.0)+(b*3.0)+(c*5.0));
        printf ("%.1lf\n",avg/10);
    }
    return 0;
}