#include<stdio.h>
int main()
{
    int  N;
    float H,S,SALARY;
    scanf("%d",&N);
    scanf("%f%f",&H,&S);
    SALARY=H*S;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",N,SALARY);
    return 0;
}