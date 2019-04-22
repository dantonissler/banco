 /**
 * File:   metodosRemocao.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:48 AM
 */

#include "metodosRemocao.h"
void removeConta(Elem *li, int cliente){
    Elem* ant = NULL;
    Elem* aux = li;
    if(listaVazia(li)){
        while((aux != NULL) && (aux->nomeCliente != cliente)) {
            ant = aux;
            aux = aux->prox;
         }
         if(aux == NULL)
            printf("Tentou remover de uma lista vazia\n");
        if(ant == NULL)
            li = aux->prox;
        else
            ant->prox = aux->prox;
        free(aux);
        printf("Cliente %d excluido com sucesso\n", li->nomeCliente);
    }else {
        printf("Tentou remover de uma lista vazia\n");
    }
}
