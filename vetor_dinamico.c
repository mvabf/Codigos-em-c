#include <stdio.h>
#include <stdlib.h>

int par_impar(int n){
if(n % 2 == 0){
    return 1;
}else
    return 0;
}

int main(){
int *array;
int i,tam;
int op;

printf("Insira o tamanho do seu vetor: ");
scanf("%d",&tam);

array = (int *) malloc(tam * sizeof(int));

printf("Insira 1-se somente quer inserir pares,2-somente impares e 3-qualquer numero: ");
scanf("%d",&op);

if(op == 1){
for(i = 0;i < tam;i++){
    printf("\nInsira Valores para seu vetor: ");
    scanf("%d",&array[i]);
    if(par_impar(array[i]) == 1){
        continue;
    }else{
        printf("\nSo aceita valores pares! Digite novamente!");
        i--;
    }
    }
}

if(op == 2){
for(i = 0;i < tam;i++){
    printf("\nInsira Valores para seu vetor: ");
    scanf("%d",&array[i]);
    if(par_impar(array[i]) == 0){
        continue;
    }else{
        printf("\nSo aceita valores impares! Digite novamente!");
        i--;
    }
    }
}
if(op == 3){
for(i = 0;i < tam;i++){
    printf("\nInsira Valores para seu vetor: ");
    scanf("%d",&array[i]);
    }
}
printf("\nVetor: ");
    for(i = 0;i < tam;i++){
        printf("[%d]",array[i]);
}
}
