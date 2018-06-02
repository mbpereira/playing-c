#include "list.h"


List* getnode(){
    List* l;
    l = (List*)malloc(sizeof(List));
    return l;
}

List* new_List(int data_type){
    List* ptr;
    ptr = getnode();
    if(ptr==NULL){
        printf("memoria insuficiente");
        exit(1);
    }
    ptr->data_type = data_type;
    return ptr;
}

void push(List* l, char * x){
    List* first;
    first = getnode();
    switch(l->data_type){
        case 1:
            first->data_type = 1;
            first->data.ival = atoi(x);
        break;
        case 2:
            first->data_type = 2;
            first->data.fval = atof(x);
        break;
        case 3:
            first->data_type = 3;
            first->data.cval = x;
        break;
        default: printf("Tipo indefinido\n"); exit(1);
    }
    first->next = l->next;
    l->next = first;
}

void remove_front(List* l){
    if(empty(l)){
        printf("Underflow\n");
        exit(1);
    }
    List *front, *after_front;
    front = l->next;
    after_front = front->next;
    l->next = after_front;
    free(front);
}

void remove_rear(List* l){
    if(empty(l)){
        printf("Underflow\n");
        exit(1);
    }
    List *back, *last;
    last = l;
    if(last->next!=NULL){
        back = last;
        remove_rear(last->next);
    }else{
        back->next = NULL;
        free(last);
    }
}

void print_e(List* l){
    switch(l->data_type){
        case 1:
            printf("%i ", l->data.ival);
        break;
        case 2:
            printf("%f ", l->data.fval);
        break;
        case 3:
            printf("%s ", l->data.cval);
        break;
    }
}
void print_l(List* l){
    if(!empty(l)){
        if(l->next!=NULL){
            print_e(l->next);
            print_l(l->next);
        }
    }else{
        printf("Vazio!\n");
        exit(1);
    }
}

int empty(List* l){
    return (l->next==NULL);
}
int size_l(List* l){
    int n;
    while(l->next!=NULL){
        n++;
        l = l->next;
    }
    return n;
}
