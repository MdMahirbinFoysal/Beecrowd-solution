#include<stdio.h>
int main()
{
    int i,x[100],max=0,pos=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>max)
          max=x[i],pos=i;
    }
    printf("%d\n%d\n",max,pos);
    return 0;


}