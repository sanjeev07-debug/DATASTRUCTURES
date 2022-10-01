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
	struct node * next;
};

// now write a user defined function for the logic

// concept
// head         second         third
//  ______      _______       _______
// |__|___| -> |___|___| - > |___|___|
// data  next                      null                

void linkedlist(struct node *pointer) {
    while(pointer!=NULL) {
        printf(" %d \n",pointer -> data);
        pointer = pointer -> next;
    }
}

int main() {
    struct node *head;
    struct node *second;
    struct node *third;
    

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    //now we need to assign the values

    head -> data = 48;
    head -> next = second;

    second -> data = 64;
    second -> next = third;

    third -> data = 62;
    third -> next = NULL;  //last node of the linkedlist

    //now call the userdefined function

    linkedlist(head);
    return 0;
}


//error : line expected a field name