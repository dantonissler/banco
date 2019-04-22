/**
 * File:   metodosInsercao.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:47 AM
 */
#include "metodosInsercao.h"

void insereListaFinal(Elem* li){
    Elem* no =(Elem*) malloc(sizeof(Elem));
    if(!no){
        printf("Sem memoria disponivel!\n");
        exit(1);
    }
    do{
        printf("Informe o numero da conta diferente das outras: ");
        scanf("%d", &no->numeroConta);
    }while(encontraCliente(li, no->numeroConta));
    printf("Informe o nome do cliente: ");
    scanf("%s", &no->nomeCliente);
    printf("Informe o saldo do cliente: ");
    scanf("%f", &no->saldo);
    no->ant = NULL;
    no->prox = NULL;
    if (listaVazia(li)) {
        li->prox = no;
        printf("Primeiro no preenchido com sucesso\n\n");
    }else{
        Elem *aux = li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
        no->ant = aux;
        printf("Operacao realizada com sucesso\n\n");
    }
}

/** Esta pendente Insere no ínicio*/
void insereListaInicio(Elem* li){
    Elem* no =(Elem*) malloc(sizeof(Elem));
    if(!no){
        printf("Sem memoria disponivel!\n");
        exit(1);
    }
    do{
        printf("Informe o numero da conta diferente das outras: ");
        scanf("%d", &no->numeroConta);
    }while(encontraCliente(li, no->numeroConta));
    printf("Informe o nome do cliente: ");
    scanf("%s", &no->nomeCliente);
    printf("Informe o saldo do cliente: ");
    scanf("%f", &no->saldo);
    no->ant = NULL;
    no->prox = NULL;
    if (listaVazia(li)) {
        li->prox = no;
        printf("Primeiro no preenchido com sucesso\n\n");
    }else{
        Elem *tmp = li->prox;
        no->prox = tmp;
        tmp->ant = no;
        li->prox = no;
    }
}
