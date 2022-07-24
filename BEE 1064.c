#include<stdio.h>
int main()
{
    float n,sum=0,avg=0;
    int count=0,i;

    for(i=1;i<=6;i++)
    {
        scanf("%f",&n);

        if(n>=0)
        {
            count++;
            sum=sum+n;
        }


    }


   printf("%d valores positivos\n",count);
   avg=sum/count;
   printf("%.1f\n",avg);
   return 0;

}