#include<stdio.h>
int main()
{
    int x,y,total;
    scanf("%d %d",&x,&y);
    total=y-x;
    if(total<0)
    {
    total=24+(y-x);
    }
    if(x==y)
    {
    printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S)\n",total);
    return 0;

}