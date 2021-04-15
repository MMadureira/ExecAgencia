#include <stdio.h>
#define agencia 1001

typedef struct
{
    int numAgencia; //nº agência
    int NumConta; //nº conta corrente
    int saldo; //nº conta corrente
} dados;

int main(){
    int x;
    dados cliente;
    cliente.numAgencia = agencia;
    cliente.NumConta = 86253;
    cliente.saldo = 203;
    printf("Agencia: %i", cliente.numAgencia);
    printf(" Numero da conta: %i, saldo %i. ", cliente.NumConta, cliente.saldo);

    if(cliente.saldo < 0){
        printf("saldo do cliente e negativo. \n");
    }

    else printf("saldo do cliente é positivo. \n");

    return 0;

}