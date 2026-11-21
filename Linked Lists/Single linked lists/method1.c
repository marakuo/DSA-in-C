
#include <stdio.h>
#include <stdlib.h>

// implementing linked list
// wastage of space on pointers
struct node{
    int data;
    struct node *next;
};



int main() {
    struct node*head= NULL;
    head =malloc(sizeof(struct node));
    head->data=5;
    head->next = NULL;

    struct node*second = malloc(sizeof(struct node));
    second->data=6;
    second->next=NULL;
    head->next =second;

    struct node*third = malloc(sizeof(struct node));
    third->data=7;
    third->next= NULL;
    second->next = third;
struct node*current=head;
    while(current!=NULL) {
        printf("%d\n",current->data);
        current = current->next;
    }












    return 0;
}
