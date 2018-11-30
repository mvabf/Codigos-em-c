#include    <stdio.h>

int mdc(int a, int b){
    if(a % b == 0){
      return b;
    }else{
        return mdc(b,(a % b));
    }
}

int main(){
int a,b;

printf("Insira valores para calculo do MDC: ");
scanf("%d %d",&a,&b);

printf("\nO MDC dos numeros eh  = %d ",mdc(a,b));

}
