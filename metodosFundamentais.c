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
        return 1;
    return 0;
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
        if(aux->numeroConta == conta) break;
        aux = aux->prox;
        if(aux->numeroConta == conta) return 1;
        else return 0;
    }
}

void tamanhoLista(Elem *li){
    int cont = 0;
    if(!listaVazia(li)){
        Elem *aux = li->prox;
        while(aux != NULL){
            aux = li->prox;
            cont++;
        }
        printf("Temos : ",cont," clientes cadastrados!\n\n");
        return;
    }else{
        printf("lista esta vazia!\n\n");
        return;
    }
}
