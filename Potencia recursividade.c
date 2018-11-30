#include <stdio.h>

int potencia(int a, int b){
int resultado;

if(b == 0){
    return  1;
}else{
    return  a * potencia(a, b - 1);
    }
}

int main(){

int base,expoente;

    printf("Insira Base: ");
    scanf("%d",&base);

    printf("Insira Expoente: ");
    scanf("%d",&expoente);

    printf("\n Valor = %d",potencia(base,expoente));

    return 0;
}
