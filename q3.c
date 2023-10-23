#include <stdio.h>
#include <stdlib.h>
#include<time.h>

char *gerarPalavra(int tam)
{
    srand(time(NULL));
    int j;
    int tam_palavra=2+ rand()% tam-2;
    printf("%d",tam_palavra);

    char *palavra=(char*) malloc(tam_palavra);

    for(int i=0; i<=tam_palavra; i+=2)
    {
        do{j=97+rand()%26;
        }while(j==97||j==10||j==105||j==111||j==117);
        palvra[i]=j;

    }
    for(int i=1; i<=tam_palavra; i+=2)
    {
        j=rand()%4;
        if(j==0)
        {
            palavra[i]='a';
        }
        else
        {
            if(j==1)
            {
                palavra[i]='e';
            }
            else
            {
                if(j==2)
                {
                    palavra[i]='i';
                }
                else
                {
                    if(j==3)
                    {
                        palavra[i]='o';
                    }
                    else palavra[i]='u';
                }
            }

        }
    }
    printf("%s",palavra);
}
char *gerarfrase(int max){

}
int main()
{
    int max=10;
    gerarPalavra(max);








}
