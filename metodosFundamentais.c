 /**
 * File:   metodosFundamentais.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:47 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "metodosFuntamentais.h"
#include "metodosInsercao.h"
#include "metodosConsulta.h""

/** */
void criaLista(Elem *li){
    li->prox = NULL;
    li->ant = NULL;
}
/** Metodo para verificar se a lista esta vazia*/
int listaVazia(Elem *li){
    if(li->prox == NULL && li->ant == NULL)
        return 0;
    return 1;
}
/** */
void liberaLista(Elem *li){
    li->ant = NULL;
    if(!listaVazia(li)){
        Elem *proxNo;
        Elem *no;
        if(li->prox != NULL){
            no = li->prox;
            while(no != NULL){
                proxNo = no->prox;
                free(no);
                no = proxNo;
            }
        }
        printf("Lista liberada!\n\n");
    }
}

int encontraCliente(Elem *li, int conta){
    Elem *aux = li->prox;
    while(aux != NULL){
        aux = li->prox;
        if(aux->numeroConta == conta){
            return 0;
        }else{
        return 1;
        }
    }
}

void tamanhoLista(Elem *li){
    int cont = NULL;
    if(!listaVazia(li)){
        Elem *aux = li->prox;
        while(aux != NULL){
            aux = li->prox;
            cont++;
        }
        printf("Temos : ",cont," clientes cadastrados!\n\n");
    }else{
        printf("lista esta vazia!\n\n");
    }
}
