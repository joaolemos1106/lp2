#include <stdio.h>
#include <stdlib.h>

double *somavet(double *vetA, double *vetB, int dim)
{
    double *vetC = (double *)malloc(dim * sizeof(double));
    for (int i = 0; i < dim; i++)
    {
        vetC[i] = vetA[i] + vetB[i];
    }
    return vetC;
}

double *prodvetescal(double *vetA, double a, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        vetA[i] *= a;
    }
    return vetA;
}

void imprimevet(double *vetA, int dim)
{
    printf("\n{");
    for (int i = 0; i < dim; i++)
    {
        printf(" %f,", vetA[i]);
    }
    printf("}\n");
}

int main()
{
    int tam, escolha;
    double valor;
    double *A = (double *)malloc(tam * sizeof(double));
    double *B = (double *)malloc(tam * sizeof(double));
    double *C = (double *)malloc(tam * sizeof(double));

    if (A == NULL || B == NULL || C == NULL)
    {
        printf("Memória não alocada\n");
        return 1;
    }


    printf("\n 1-somar dois vetores\n 2-produto escalar de um vetor\n 0-sair\n\n Sua escolha: ");
    scanf("%d", &escolha);

    while(escolha<0||escolha>2){
        printf("tente novamente\n Sua escolha: ");
        scanf("%d", &escolha);
    }
    switch (escolha)
    {
    case 1:
        printf("Qual sera o tamanho do vetor: ");
        scanf("%d", &tam);

        printf("digite os valores do vetor 1:\n");
        for (int i = 0; i <tam; i++)
        {
            printf("valor %d: ",i+1);
            scanf("%lf",&A[i]);
        }

        printf("digite os valores do vetor 2:\n");
        for (int i = 0; i < tam; i++)
        {
            printf("valor %d: ",i+1);
            scanf("%lf",&B[i]);
        }

        C = somavet(A, B, tam);
        printf("o vetor resultante eh == ");
        imprimevet(C, tam);
        break;
    case 2:
        printf("Qual sera o tamanho do vetor: ");
        scanf("%d", &tam);
        printf("digite os valores do vetor 1:\n");
        for (int i = 0; i <tam; i++)
        {
            printf("valor %d; ",i+1);
            scanf("%lf",&A[i]);
        }
        printf("digite o numero q ira mutiplicar o vetor:");
        scanf("%lf", &valor);
        prodvetescal(A, valor, tam);
        printf("o vetor resultante eh == ");imprimevet(A, tam);
        break;
    case 0:
        break;
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
