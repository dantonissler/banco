/**
 * File:   menus.c
 * Author: Danton Issler Rodrigues
 *
 * Created on March 29, 2019, 2:45 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
#include "metodosFuntamentais.h"
#include "metodosInsercao.h"
#include "metodosRemocao.h"
#include "metodosConsulta.h"

/**Metodo que imprime as opções iniciais para o usuario*/
int menuInicial(void){
    int opt = 0;
    /** Opeções disponiveis*/
    printf("|-------Menu inicial-------|\n");
    printf("   Escolha a opcao\n");
    printf("0. Sair\n");
    printf("1. Adicionar novo cliente\n");
    printf("2. Remover cliente\n");
    printf("3. Consulta lista\n");
    printf("4. Tamanho da lista\n");
    printf("5. Zerar lista\n");
    printf("|--------------------------|\n");
    printf("Opcao:'= %i.\n ", opt);
    printf("Opcao: ");
    /** Captura da opção escolhida*/
    scanf("%d", &opt);
    return opt;
}
/**
* Metodo para seleção da função conforme informado
* pelo úsuario no menu inicial
*/
void opcaoInicial(Elem *li, int op) {
    switch(op){
        case 0:
            /** Libera espaço alocado pela lista*/
            liberaLista(li);
            break;
        case 1:
            /**Chamada da opção de adicionar elemento no inicio da lista*/
            while( op != 0){
                op = menuAdicao();
                opcaoAdicao(li, op);
            }
            break;
        case 2:
            while(op != 0){
                op = menuRemocao();
                opcaoAdicao(li,op);
            }
            break;
        case 3:
            while(op != 0){
                op = menuConsulta();
                opcaoConsulta(li,op);
            }
            break;
        case 4:
                tamanhoLista(li);
            break;
        case 5:
                liberaLista(li);
            break;
        default:
            printf("Comando invalido\n\n");
    }
}
/**Metodo que imprime as opções de adição para o usuario*/
int menuAdicao(void){
    int opt;
    printf("|---Menu para adicionar um novo cliente---|\n");
    /** Opeções disponiveis*/
    printf("Escolha a opcao\n");
    printf("0. Retornar ao menu anterior\n");
    printf("1. Adicionar elemento no final da lista\n");
    printf("2. Adicionar elemento no inicio da lista\n");
    printf("3. Adicionar elemento em uma posição\n");
    printf("|---------------------------------------|\n");
    printf("Opcao: ");
    /** Captura da opção escolhida*/
    scanf("%d", &opt);

    return opt;
}
/**
* Metodo para seleção da função conforme informado
* pelo úsuario no menu de adição
*/
void opcaoAdicao(Elem *li, int op) {
    int opcao;
    switch(op){
        case 0:
            /** Chama a tela do menu inicial*/
            menuInicial();
            break;
        case 1:
            /**Chamada da opção de adicionar elemento no inicio da lista*/
            insereListaFinal(li);
            break;
        case 2:
            /**Chamada da opção de adicionar elemento no inicio da lista*/
            insereListaInicio(li);
            break;
        case 3:
            /**insereListaOrdenada(li, conta)*/
            printf("informe a posicao: ");
            scanf("%d", &opcao);
            insereListaOrdenada(li, opcao);
            /**Chamada da opção de adicionar elemento no inicio da lista*/
            break;
        default:
            printf("Comando invalido\n\n");
    }
}
/**Metodo que imprime as opções de adição para o usuario*/
int menuRemocao(void){
    int opt;
    printf("|----Menu para remover um cliente----|\n");
    /** Opeções disponiveis*/
    printf("0. Retornar ao menu anterior\n");
    printf("1. Remover do ínicio\n");
    printf("2. Remover um determinada posição\n");
    printf("3. Remover do final\n");
    printf("|------------------------------------|\n");
    /** Captura da opção escolhida*/
    scanf("%d", &opt);
    return opt;
}
/**
* Metodo para seleção da função conforme informado
* pelo úsuario no menu inicial
*/
void opcaoRemocao(Elem *li, int op) {
    switch(op){
        case 0:
            /** Chama a tela do menu inicial*/
            menuInicial();
            break;
        case 1:
            removeListaInicio(li);
            break;
        case 2:
            removeListaFim(li);
            break;
        case 3:
            /**removeListaMeio(li, conta);*/
            break;
        default:
            printf("Comando invalido\n\n");
    }
}
/**Metodo que imprime as opções de adição para o usuario*/
int menuConsulta(void){
    int opt;
    printf("|----Menu para pesquisa de clientes----|\n");
    /** Opeções disponiveis*/
    printf("0. Retornar ao menu anterior\n");
    printf("1. Consulta toda lista\n");
    printf("2. Consulta pela posição do elemento\n");
    printf("3. Consulta pelo número da conta\n");
    printf("|--------------------------------------|\n");
    /** Captura da opção escolhida*/
    scanf("%d", &opt);
    return opt;
}
/**
* Metodo para seleção da função conforme informado
* pelo úsuario no menu inicial
*/
void opcaoConsulta(Elem *li, int op) {
    switch(op){
        case 0:
            /** Chama a tela do menu inicial*/
            menuInicial();
            break;
        case 1:
            insereListaInicio(li);
            break;
        case 2:
            insereListaFinal(li);
            break;
        case 3:
            /**insereListaOrdenada(li, conta);*/
            break;
        default:
            printf("Comando invalido\n\n");
    }
}
