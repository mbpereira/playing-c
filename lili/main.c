#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main(){
    List* lista, *lista2;
    lista = new_List(int_type);

    //NUMERIC LIST (INT)
    push(lista, number(1));
    push(lista, number(2));
    push(lista, number(3));

    print_l(lista);
    printf("\n");

    remove_front(lista);

    print_l(lista);
    printf("\n");

    push(lista, number(300));

    remove_rear(lista);

    print_l(lista);
    printf("\n");

    push(lista, number(5));
    push(lista, number(44));
    push(lista, number(2));

    print_l(lista);
    printf("\n");


    //CHAR LIST
    lista2 = new_List(char_type);

    push(lista2, text("ONE"));
    push(lista2, text("TWO"));
    push(lista2, text("THREE"));
    push(lista2, text("FOUR"));

    print_l(lista2);
    printf("\n");

    remove_front(lista2);

    print_l(lista2);
    printf("\n");

    remove_rear(lista2);

    print_l(lista2);

}
