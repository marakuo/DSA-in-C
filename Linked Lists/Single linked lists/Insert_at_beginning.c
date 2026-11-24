
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
struct node* Insert_at_end(struct node*tail, int data) {
    struct node*newnode = malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    tail->next=newnode;
    return newnode; // will be the next tail
}

/*insert at the beginning*/
struct node* insert_at_beginning(struct node *head, int data) {
    struct node*ptr= malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
   ptr->next=head;
    head=ptr;
    return head;
    /*
    * The head inside the function is a local copy.
      Changing it does NOT change the original head in main().
      so we have to return pointer to head (its address)
     */


}


int main() {
    struct node*head= NULL;
    head =malloc(sizeof(struct node));
    head->data=5;
    head->next = NULL;
    struct node*tail = head;
    tail = Insert_at_end(tail,1);
    tail = Insert_at_end(tail,10);
    tail = Insert_at_end(tail,100);
    tail = Insert_at_end(tail,1000);
    print_list(head);
    count_of_nodes(head);
    // time complexity of insertion now o(1)
    head= insert_at_beginning(head,99);
    print_list(head);






    return 0;
}
