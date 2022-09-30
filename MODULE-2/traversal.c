//algorithm step 1 : set ptr = start
//step 2 : while pointer is not equal to null
//step 3 : then pointer -> data
//step 4 : pointer is equal to pointer next
//step 5 : if pointer next is  == null it will stop the loop
//step 6 : exit

#include<stdio.h>
#include<stdlib.h>

//how to declare a linked list? 

struct node {
    int data;
    struct node *next;

};

void linkedlist(struct node * ptr) {
    while(ptr!=NULL) {
        printf("Element : %d \n",ptr->next);
        ptr = ptr -> next;

    }
}


int main() {
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    


    //now inserting data in the nodes

    head -> data = 7;
    head -> next = second;
    

    second ->data = 447;
    second -> next = third;

    third -> data = 5654;
    third -> next = fourth;

    fourth -> data = 354;
    fourth -> next = NULL;     //last node
    
    linkedlist(head);
    return 0;
}

