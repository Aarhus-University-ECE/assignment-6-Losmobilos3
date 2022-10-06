
#include <stdio.h>
#include "max.c"
#include "list.c"

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    printf("Tests for max(): \n");

    int numbers1[7] = {5, 10, 20, 6, 10, -1, 9};

    printf("True if %d = 20 \n", max(numbers1, 7));

    int numbers2[3] = {5, 1, 4};

    printf("True if %d = 5 \n", max(numbers2, 3));







    printf("Tests for size(): \n");

    node *l = (node *) malloc(sizeof(node));
    l->next=NULL;
    printf("True if %d = 0 \n", size(l));

    l->next = (node*) malloc(sizeof(node));
    l->next->next=NULL;
    l->next->data=10;

    printf("True if %d = 1 \n", size(l));

    l->next->next=(node*) malloc(sizeof(node));
    l->next->next->next = NULL; 
    l->next->next->data = 20; 

    printf("True if %d = 2 \n", size(l));







    printf("Tests for largest(): \n");

    node *m = (node*) malloc(sizeof(node));
    m->data=0;
    m->next = NULL;
    
    m->next = (node*) malloc(sizeof(node));
    m->next->next=NULL;
    m->next->data=0;
    printf("True if %d = 0 \n", largest(m));
    

    node *p;
    for (int i=10; i>0; i--) {
        p = m;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = (node*) malloc(sizeof(node));
        p=p->next;
        p->next=NULL;
        p->data = i;
    }
    printf("True if %d = 10 \n", largest(m));


    m->next->next->next->data = 100;

    printf("True if %d = 100 \n", largest(m));


    return 0;
}