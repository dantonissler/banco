/**
 * File:   metodosConsulta.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:47 AM
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
        printf("--------------------------------------\n");
        printf("Numero da conta: ' = %i\n", li->numeroConta);
        printf("Nome Cliente: ' = %i\n", li->nomeCliente);
        printf("Saldo da conta: ' = %i\n", li->saldo);
        printf("Saldo da conta: ' = %i\n", li->saldo);
        printf("Anterior ' = %i\n", li->ant ,"Atual: ' = %i\n", aux ," Proximo: ' = %i\n", li->prox);
        printf("--------------------------------------\n");
    }
}
/**
* Consultar 1 elemento da lista utilizando o numero da conta.
*/
void consultaListaCont(Elem *li, int conta){
    Elem *aux = li->prox;
    while(aux != NULL){
        aux = li->prox;
        printf("--------------------------------------\n");
        if(encontraCliente(li, aux->numeroConta)){
            printf("Numero da conta: ' = %i\n", li->numeroConta);
            printf("Nome Cliente: ' = %i\n", li->nomeCliente);
            printf("Saldo da conta: ' = %i\n", li->saldo);
            printf("Anterior ' = %i\n", li->ant ,"Atual: ' = %i\n", aux ," Proximo: ' = %i\n", li->prox);
            printf("--------------------------------------\n");
        break;
        }
    }

}
