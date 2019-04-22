 /**
 * File:   metodosFundamentais.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:47 AM
 */
#include "metodosFuntamentais.h"
/** Inicializar minha lista */
void criaLista(Elem *li){
    li->prox = NULL;
    li->ant = NULL;
}
/** Metodo para verificar se a lista esta vazia*/
int listaVazia(Elem *li){
    if(li->prox == NULL){
        return 1;
        printf("esta vazia");
    }
    return 0;
}
/** Metodo para zerar a lista*/
void liberarLista(Elem *li){
     if(!listaVazia(li)){
		Elem *proxNode;
		Elem *atual;
		atual = li->prox;
		while(atual != NULL){
			proxNode = atual->prox;
			free(atual);
			atual = proxNode;
		}
	}
}
