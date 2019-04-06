/**
 * File:   metodosFundamentais.c
 * Author: Danton Issler Rodrigues
 *
 * Created on March 29, 2019, 2:45 PM
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
    if(li->prox == NULL)
        return 1;
    if(li->ant == NULL)
        return 1;
    return 0;
}
/** */
void liberaLista(Elem *li){
    if(!listaVazia(li)){
        Elem *antNo;
        Elem *proxNo;
        Elem *no;
        if(li->prox != NULL){
            no = li->prox;
            while(no != NULL){
                proxNo = no->prox;
                free(no);
                no = proxNo;
            }
        }else{
            no = li->ant;
            while(no != NULL){
                antNo = no->ant;
                free(no);
                no = antNo;
            }
        }
        free(li);
        exit(1);
        printf("Lista liberada!\n\n");
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
        printf("O tamanho do vetor é: ",cont,"!\n\n");
    }else{
        printf("O tamanho da lista é ZERO!\n\n");
    }
}
