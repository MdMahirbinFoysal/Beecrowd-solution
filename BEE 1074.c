#include<stdio.h>
int main()
{
   int i,n,a;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    scanf("%d",&a);

    if(a==0)
   {
    printf("NULL\n");
   }
   else if(a%2==0)
   {
       if(a>0)
        printf("EVEN POSITIVE\n");
        else
        {
            printf("EVEN NEGATIVE\n");
        }
   }
   else
   {
       if(a%2==1)
       {
           printf("ODD POSITIVE\n");
       }
       else
        printf("ODD NEGATIVE\n");
   }


   }

   return 0;

}