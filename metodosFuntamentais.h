 /**
 * File:   metodosFundamentais.h
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:45 PM
 */

#ifndef METODOSFUNTAMENTAIS_H_INCLUDED
#define METODOSFUNTAMENTAIS_H_INCLUDED
#include "menus.h"

struct banco{
    struct banco *ant;
    struct banco *prox;
    int numeroConta;
    char nomeCliente[30];
    float saldo;
};
typedef struct banco Elem;

void criaLista();
void liberarLista(Elem *li);

#endif // METODOSFUNTAMENTAIS_H_INCLUDED
