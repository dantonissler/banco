 /**
 * File:   metodosRemocao.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:48 AM
 */
#include <stdio.h>
#include <stdlib.h>
#include "metodosRemocao.h"

void removeListaInicio(Elem *li){
//    if(listaVazia(li)){
//        printf("Não é possivel alocar memoria");
//        exit(1);
//    }
//    Elem *no = *li;
//    *li = no->prox;
//    if(no->prox != NULL)
//        no->prox->ant = NULL;
//    free(no);
    printf("Esta funcionalidade ainda nao foi implementada.");
}
void removeListaFim(Elem *li){
    if(listaVazia(li)){
        printf("Nao existe elementos para remover");
        exit(1);
    }
    Elem *an = NULL;
    Elem *pr = li->prox;

    while(pr != NULL){
        an = pr;
        pr = pr->prox;
    }
    if(listaVazia(an)){
        li = pr->prox;
    } else{
        pr->ant->prox = pr->prox;
    }
    if(pr->prox != NULL){
        pr->ant->prox = pr->ant;
    }
    printf("Ultimo item removido");
}
void removeListaMeio(Elem *li, int conta){
    if(listaVazia(li)){
        printf("Nao existe elementos para remover");
        exit(1);
    }
    Elem *an = NULL;
    Elem *pr = li->prox;

    while(pr != NULL && pr->numeroConta != conta){
        an = pr;
        pr = pr->prox;
    }
    if(listaVazia(an)){
        li = pr->prox;
    } else{
        pr->ant->prox = pr->prox;
    }
    if(pr->prox != NULL){
        pr->ant->prox = pr->ant;
    }
    printf("Item removido com sucesso");
}
