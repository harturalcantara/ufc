#include <stdio.h>
#include <stdlib.h>

char* juntanomes(char *nome1, char *nome2){
    int i, j;
    int tam1,tam2,tam3;
    tam1 = tamanho(nome1);
    tam2 = tamanho(nome2);
    tam3 = tam1+tam2;

    char *nome3;
    nome3 = (int*)malloc(sizeof(char)*tam3);

    for(i=0;i<tam1;i++){
        if(nome1[i]!='\0'){
            nome3[i] = nome1[i];
        }
        else
            break;
    }

    for(j=0;j<=tam3;j++){
        if(nome2[j]!='\0'){
            nome3[i] = nome2[j];
            i++;
        }
        else{
            break;
        }
    }
    nome3[i] = '\0';
    return nome3;
}

int tamanho(char *nome){
    int i=0;
    while(nome[i]!='\0'){
        i++;
    }
    return i;
}

int main()
{
    char nome1[50];
    char nome2[50];
    printf("Digite o 1 nome:");
    gets(nome1);
    fflush(stdin);
    printf("\nDigite o 2 nome:");
    gets(nome2);
    fflush(stdin);

    char *n;
    n = juntanomes(nome1,nome2);
    printf("%s", n);
    return 0;
}
