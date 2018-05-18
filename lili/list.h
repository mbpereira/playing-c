#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <string.h>
#include "list.h";


#define number(a) #a
#define text(t) (t)



enum{
    int_type = 1,
    float_type,
    char_type,
};

typedef struct list{
    int data_type;
    union {
        int     ival;
        float   fval;
        char*   cval;
    }data;
    struct list *next;
}List;

/*
    CRIA UM NÓ
*/
List* getnode(void);

/*
    CRIA UMA LISTA DE DETERMINADO TIPO
    int   = 1 = enum int_type
    float = 2 = enum float_type
    char* = 3 = enum char_type
*/
List* new_List(int data_type);

/*
    FUNÇÃO DE INSERÇÃO:
    INSERE OS ELEMENTOS NO INICIO.
    X  É UM  PONTEIRO DE UM BUFFER
    RETORNADO   PELAS  FUNCOES  DE
    TIPAGEM.  O  ARMAZENAMENTO  NA
    LISTA  É FEITO DE ACORDO COM O
    TIPO  INFORMADO NA  FUNÇÃO  DE
    CRIAÇÃO.  OS  DADOS  EM  X SÃO
    CONVERTIDOS, TAMBÉM, DE ACORDO
    COM ESSA INFORMAÇÃO.
*/
void push(List* l, char * x);

/*
    REMOVE O PRIMEIRO ELEMENTO
*/
void remove_front(List* l);

/*
    REMOVE O ULTIMO ELEMENTO
*/
void remove_rear(List* l);

/*
    EXIBE NA TELA O PRIMEIRO ELEMENTO
    DA LISTA.
*/
void print_e(List* l);

/*
    EXIBE A LISTA
*/
void print_l(List* l);

/*
    VERIFICA SE A LISTA ESTÁ VAZIA
*/
int empty(List* l);

/*
    RETORNA O TAMANHO DA LISTA
*/
int size_l(List* l);


#endif // LIST_H_INCLUDED
