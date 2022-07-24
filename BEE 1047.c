#include <stdio.h>

int main()
{
    int a,b,c,d,dh,dm;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    dh=c-a;
    if(dh<0)
    {
        dh=24+(c-a);
    }
    dm=d-b;
    if(dm<0)
    {
        dm=60+(d-b);
        dh--;
    }
    if(a==b && c==d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
    return 0;
}
