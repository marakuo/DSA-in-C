// use only to pointers and use head->next->next...

#include <stdio.h>
#include <stdlib.h>

// implementing linked list
struct node{
    int data;
    struct node *next;
};



int main() {
    struct node*head= NULL;
    head =malloc(sizeof(struct node));
    head->data=5;
    head->next = NULL;

   struct node*current = malloc(sizeof(struct node));
    current->data=4;
    current->next =NULL;
    head->next=current;
    current = malloc(sizeof(struct node));
    current->data=3;
    current->next=NULL;
    head->next->next=current;
    struct node*print= malloc(sizeof(struct node));
    print = head;
    while(print!=NULL) {
        printf("%d\n",print->data);
        print= print->next;
    }







    return 0;
}
