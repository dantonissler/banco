/**
 * File:   metodosFundamentais.c
 * Author: Danton Issler Rodrigues
 *
 * Created on March 29, 2019, 2:45 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "metodosFuntamentais.h"

void insereListaFinal(Elem* li){

    int cont = 1;
    Elem *p = li;
    Elem* no = (Elem*) malloc(sizeof(Elem));
    while(p->prox != NULL){
            p = p->prox;
            cont++;
    }
    printf("Número da nova conta: ");
    scanf("%d", &no->numeroConta);
//    printf("Nome do cliente: ");
//    scanf("%d", &no->nomeCliente);// corrigir erro na linha de dados
    printf("Valor do deposito inicial: ");
    scanf("%d", &no->saldo);
    no->prox = NULL;
    no->ant = p;
    p->prox = no;
    printf("Operação realizada com sucesso \n");


//    if(li == NULL){
//        printf("Não existe uma lista alocada!\n");
//        exit(1);
//    }
//
//    Elem* no = (Elem*) malloc(sizeof(Elem));
//
//    if(!no){
//        printf("Memoria disponivel!\n");
//        exit(1);
//    }
//    if (listaVazia(li)){ /**Varificar se a lista é vazia: insere inicio*/
//        no->ant = NULL;
//        li = no;
//        printf("Primeira posição preenchida\n");
//    }else{
//        Elem *aux = li;
//        while(aux->prox != NULL){
//            aux = aux->prox;
//        }
//        aux->prox = no;
//        no->prox = aux;
//        printf("Operação realizada com sucesso\n");
//    }
//    printf("Número da nova conta: ");
//    scanf("%d", &no->numeroConta);
//    printf("Nome do cliente: ");
//    scanf("%d", &no->nomeCliente);// corrigir erro na linha de dados
//    printf("Valor do deposito inicial: ");
//    scanf("%d", &no->saldo);
//    no->prox = NULL;
}
/**Insere no ínicio*/
void insereListaInicio(Elem *li){
//    if(listaVazia(li)){
//        printf("Não é possivel alocar memoria");
//        exit(1);
//    }
//    Elem* no =(Elem*) malloc(sizeof(Elem));
//    if(listaVazia(no)){
//        printf("Sem memoria disponivel!\n");
//        exit(1);
//    }
//    printf("Número da nova conta: ");
//    scanf("%d", &no->numeroConta);
//    printf("Nome do cliente: ");
//    scanf("%d", &no->nomeCliente);
//    printf("Valor do deposito inicial: ");
//    scanf("%d", &no->saldo);
//    no->ant = NULL;
//    if (listaVazia(li)) {
//        li->ant = no;
//        li = no;
//        printf("Operação realizada com sucesso\n");
//    }else{
//        Elem *aux = li;
//        while(aux->ant != NULL){
//            aux = aux->ant;
//            aux->ant = no;
//            no->ant = aux;
//        }
//        printf("Operação realizada com sucesso\n");
//    }
}
/**Insere no ínicio*/
void insereListaOrdenada(Elem *li, int conta){
//    if(listaVazia(li)) {
//        printf("Não é possivel alocar memoria");
//        exit(1);
//    }
//    Elem *no = (Elem*) malloc(sizeof(Elem));
//    if(listaVazia(no)){
//        printf("Sem memoria disponivel!\n");
//        exit(1);
//    }
//    if(listaVazia(li)){/**Insere no ínicio*/
//        no->prox = NULL;
//        no->ant = NULL;
//        li = no;
//        printf("Operação realizada com sucesso\n");
//    }
//    else{/**procura onde inserir*/
//        Elem *ante *atual = *li;
//        while(atual != NULL && atual->dados.numConta < cliente){
//            ante = atual;
//            atual = atual->prox;
//        }
//        if(atual== *li){/**Inserir inicio*/
//            no->ant = NULL;
//            (*li)->ant = no;
//            no->prox = (*li);
//            *li = no;
//        }else{
//            no->prox = ante->prox;
//            no->ant = ante;
//            ante->prox = no;
//            if(atual != NULL)
//                atual->ant = no;
//        }
//    }
}
