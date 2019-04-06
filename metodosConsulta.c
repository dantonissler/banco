/**
 * File:   metodosConsulta.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:45 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "metodosConsulta.h"

/**
* Consultar 1 elemento da lista utilizando a posição do elemento.
*/
void consultarTodosElementos(Elem *li){
    Elem *aux = li->prox;
    while(aux != NULL){
        aux = li->prox;
        printf("Numero da conta: ' =%i\n", li->numeroConta);
        printf("Nome Cliente: ' =%i\n", li->nomeCliente);
        printf("Saldo da conta: ' =%i\n", li->saldo);
        printf("\n\n");
    }
}
/**
* Consultar 1 elemento da lista utilizando o numero da conta.
*/
void consultaListaCont(Elem *li, int conta){
    while(aux != NULL){
        aux = li->prox;
        if(encontraCliente(li, no->numeroConta)){
            printf("Numero da conta: ' =%i\n", li->numeroConta);
            printf("Nome Cliente: ' =%i\n", li->nomeCliente);
            printf("Saldo da conta: ' =%i\n", li->saldo);
            printf("\n\n");
        break;
        }
    }

}
