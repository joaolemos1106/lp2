#include <stdio.h>
#include <stdlib.h>
#include<time.h>



double *somavet(double *vetA, double *vetB)
{
    double *vetC = (double *)malloc(5 * sizeof(double));
    for (int i = 0; i < 4; i++)
    {
        vetC[i] = vetA[i] + vetB[i];
    }
    return vetC;
}

double *prodvetescal(double *vetA, double a)
{
    for (int i = 0; i < 4; i++)
    {
        vetA[i] *= a;
    }
    return vetA;
}

void imprimevet(double *vetA)
{
    printf("{");
    for (int i = 0; i < 4; i++)
    {
        printf(" %f,", vetA[i]);
    }
    printf("}\n");
}

int main()
{
    double valor;
    double *A = (double *)malloc(5 * sizeof(double));
    double *B = (double *)malloc(5 * sizeof(double));
    double *C = (double *)malloc(5 * sizeof(double));

    if (A == NULL || B == NULL || C == NULL)
    {
        printf("Memória não alocada\n");
        return 1;
    }
    srand(time(NULL));
    for(int i=0; i<=4; i++)
    {
        A[i]=rand()%100;
    }
    printf("vetor A == ");imprimevet(A);
    for(int i=0; i<=4; i++)
    {
        B[i]=rand()%100;
    }
    printf("vetor B == ");imprimevet(B);
    C = somavet(A, B);
    printf("o vetor soma eh == ");
    imprimevet(C);

    printf("digite o numero q ira mutiplicar o vetor:");
    scanf("%lf", &valor);
    prodvetescal(C, valor);
    printf("o vetor resultante final eh == ");
    imprimevet(C);

    free(A);
    free(B);
    free(C);

    return 0;
}
