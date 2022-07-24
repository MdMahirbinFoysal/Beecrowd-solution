#include<stdio.h>
int main()
{
    int i,j,k,n,a,b,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
         if(a==b)
    {
        c=0;
        printf("%d\n",c);
    }
    else if(a<b)
    {
        for(j=a+1,c=0;j<b;j++)
        {
            if(j%2==1 ||j%2==-1)
                c=c+j;

        }
        printf("%d\n",c);
    }
    else
    {
        for(k=b+1,c=0;k<a;k++)
        {
            if(k%2==1||k%2==-1)
                c=c+k;
        }
        printf("%d\n",c);
    }
    }
    return 0;

}