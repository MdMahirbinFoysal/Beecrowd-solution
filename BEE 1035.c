#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if ((w%2==0)&&(x>y)&&(z>w)&&(y+z>w+x)&&y>0&&z>0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;
}
