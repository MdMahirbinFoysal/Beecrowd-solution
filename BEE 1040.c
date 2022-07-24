#include <stdio.h>

int main()

{

    double a, b, c, d, avg, x, sum;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    avg=a*.2+b*.3+c*.4+d*.1;
    printf("Media: %.1f\n", avg);
    if (avg >= 7.0)
        {
        printf("Aluno aprovado.\n");
        }
    else if (avg >= 5.0)
    {

        printf("Aluno em exame.\n");

        scanf("%lf", &x);

        printf("Nota do exame: %.1f\n", x);
        sum=(avg+x)/2;

        if (sum>5.0)
            {

            printf("Aluno aprovado.\n");
            }
        else
            {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n",sum);
    }

    else{

        printf("Aluno reprovado.\n");
        }
    return 0;

}