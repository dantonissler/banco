/**
 * File:   metodosConsulta.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:47 AM
 */
#include "metodosConsulta.h"

/**
* Consultar 1 elemento da lista utilizando a posição do elemento.
*/
void consultarTodosElementos(Elem *li){

    if(listaVazia(li)){
        printf("A lista esta vazia\n\n");
    }else{
        Elem *aux = li->prox;
        do{
            printf("--------------------------------------\n");
            printf("Numero da conta: ' = %d\n", aux->numeroConta);
            printf("Nome Cliente: ' = %s\n", aux->nomeCliente);
            printf("Saldo da conta: ' = %f\n", aux->saldo);
            printf("Anterior ' = %d Atual: ' = %d  Proximo: ' = %d\n", aux->ant, aux, aux->prox);
            printf("--------------------------------------\n");
            aux = aux->prox;
        }while(aux != NULL);
    }
}
int encontraCliente(Elem *li, int conta){
    Elem *aux = li->prox;
    while(aux != NULL){
        if(aux->numeroConta == conta) {
            return 1;
        }
        aux = aux->prox;
    }
     return 0;
}
/**
* Consultar 1 elemento da lista utilizando o numero da conta.
*/
//void consultaListaCont(Elem *li, int conta){
//    Elem *aux = li->prox;
//    while(aux != NULL){
//        printf("--------------------------------------\n");
//        if(encontraCliente(li, aux->numeroConta)){
//            printf("Numero da conta: ' = %i\n", li->numeroConta);
//            printf("Nome Cliente: ' = %i\n", li->nomeCliente);
//            printf("Saldo da conta: ' = %i\n", li->saldo);
//            printf("Anterior ' = %i\n", li->ant ,"Atual: ' = %i\n", aux ," Proximo: ' = %i\n", li->prox);
//            printf("--------------------------------------\n");
//            printf("Cliente nao encontrado! \n");
//        }
//        aux = li->prox;
//    }
//}

