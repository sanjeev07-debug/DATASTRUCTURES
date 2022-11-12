// algorithm : step 1 : for counting the number of nodes declare count is equal to 0
//step 2 : now write a while loop where pointer is not eqaul to null
//step 3 : then count = count  + 1
//step 4 : pointer = pointer -> next
//when pointer is equall to null stop

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void linkedlist(struct node * pointer) {
    int count = 0;
    while(pointer!=NULL) {
        // int count = 0;
        // count = count + 1;
       
        printf("%d",pointer -> data);
        pointer = pointer -> next;
        count++;
        printf("%d",count);
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

    head -> data = 7;
    head -> next = second;

    second -> data = 69;
    second -> next = third;

    third -> data = 54;
    third -> next = fourth;

    fourth -> data = 64;
    fourth -> next = NULL;

    linkedlist(head);
    // printf("%d\n",count);
    return 0;

}