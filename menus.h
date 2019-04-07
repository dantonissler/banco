 /**
 * File:   menus.h
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:48 AM
 */

#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

typedef struct banco Elem;
void criaLista(Elem *li);
int menuInicial(void);
void opcaoInicial(Elem *li, int op);
int menuAdicao(void);
void opcaoAdicao(Elem *li, int op);
int menuRemocao(void);
void opcaoRemocao(Elem *li, int op);
int menuConsulta(void);
void opcaoConsulta(Elem *li, int op);
void insereListaFinal(Elem *li);
Elem *criaNo();
#endif // MENUS_H_INCLUDED
