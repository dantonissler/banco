/**
 * File:   main.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:48 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
#include "metodosFuntamentais.h"
#include "metodosInsercao.h"
#include "metodosRemocao.h"
#include "metodosConsulta.h""

/**
*Estrutura da lista
*E um ponteiro para o proximo e outro para o anterior
*/

void main() {
    /** Criar um ponteiro inicial*/
     Elem *no  = (Elem*) malloc(sizeof(Elem));
    /** verificar se o espaço da memoria foi alocado*/
    if(!no){
        printf("Sem memoria disponivel!\n");
        exit(1);
    }
    /** Criar a lista*/
    criaLista(no);
    int opt = 1;
    while(opt != 0){
        opt = menuInicial();
        opcaoInicial(no,opt);
    }
    /** Libera o espaço da memoria que o programa estava utilizando*/
    free(no);
}
