/**
 * File:   metodosInsercao.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:47 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "metodosFuntamentais.h"

void insereListaFinal(Elem* li){
     Elem* no =(Elem*) malloc(sizeof(Elem));
    if(!no){
        printf("Sem memoria disponivel!\n");
        exit(1);
    }
    printf("Informe o numero da conta: ");
    scanf("%d", &no->numeroConta);
    if(encontraCliente(li, no->numeroConta)){
        printf("Digite uma conta diferente, pois esta esta ja foi cadastrada:");
        while(encontraCliente(li, no->numeroConta)){
            scanf("%d", &no->numeroConta);
            printf("Digite uma conta diferente, pois esta esta ja foi cadastrada:");
        }
    }
    printf("Informe o nome do cliente: ");
    scanf("%s", &no->nomeCliente);
    printf("Informe o saldo do cliente: ");
    scanf("%f", &no->saldo);
    no->ant = NULL;
    no->prox = NULL;
    if (listaVazia(li)) {
        li->prox = no;
        printf("Operação realizada com sucesso\n");
    }else{
        Elem *aux = li->prox;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
        no->ant = aux;
        printf("Operação realizada com sucesso\n");
    }
}
/**Insere no ínicio*/
void insereListaInicio(Elem *li){
    int cont = 1;
    /**Não pode ter contas repitidas.*/
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if(!no){
        printf("Memoria disponivel!\n");
        return;
    }
    if(listaVazia(li)){ /**Varificar se a lista é vazia: insere inicio*/
        printf("Numero da nova conta: ");
        scanf("%d", &no->numeroConta);

        printf("Nome do cliente: ");
        scanf("%s",no->nomeCliente); // Não consigo fazer o Array de car funcion

        printf("Valor do deposito inicial: ");
        scanf("%f", &no->saldo);

        no->prox = NULL;
        no->ant = NULL;
        li->prox = no;
        printf("Primeira posicao preenchida\n");
    }else{
        while(li->prox != NULL){
            li = li->prox;
            cont++;
        }
        printf("Numero da nova conta: ");
        scanf("%d", &no->numeroConta);
        while(encontraCliente(li, no->numeroConta)){
            printf("Digite uma conta diferente, pois esta esta ja foi cadastra:");
            scanf("%d", &no->numeroConta);
        }
        scanf("%d", &no->numeroConta);
        printf("Nome do cliente: ");
        scanf("%s", no->nomeCliente); // Não consigo fazer o Array de car funcionar
        printf("Valor do deposito inicial: ");
        scanf("%f", &no->saldo);
        no->prox = NULL;
        no->ant = li;
        li->prox = no;
        printf("Foi inserido o no ' = %dº.\n", cont);
    }
}
///**Insere no ínicio*/
//void insereListaOrdenada(Elem *li, int conta){
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
//    printf("Esta funcao nao foi implementada ainda por gentileza aquarde\n");
//}
