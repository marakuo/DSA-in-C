
#include <stdio.h>
#include <stdlib.h>

// implementing linked list
struct node{
    int data;
    struct node *next;
};
void count_of_nodes(struct node *head) {
    if (head == NULL) {printf("The list is empty"); return;}
    int ctr =0;
    struct node *temp = head;
    while(temp!=NULL) {
        ctr++;
        temp = temp->next;


    }
    printf("Number of nodes: %d\n",ctr);

}
void print_list(struct node *head) {
    if (head== NULL) {printf("The list is empty"); return;}
    struct node*temp = head;
    printf("The list is: ");
    while (temp!=NULL) {
        printf("[ %d ] -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
    printf("\n");
}
void insert_at_end(struct node*head, int data) {
    struct node*ptr = head;
    struct node*temp = malloc(sizeof(struct node));
    temp->data=data;
    temp->next = NULL;

    while (ptr->next!= NULL) {
        ptr=ptr->next;
    }
    ptr->next=temp;
}



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
    print_list(head);
    count_of_nodes(head);
    insert_at_end(head,5);
    print_list(head);
    count_of_nodes(head);






    return 0;
}
