#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node * next;
};

void begin(struct node * head,int * newnode)
{
    newnode = malloc(sizeof(struct node));
    printf("enter the data u want to insert : ");
    scanf("%d",&newnode -> data);
    newnode -> next = head;
    head = newnode;
    return head;

}

void display(struct node * pointer)
{
    while(pointer != NULL) {
        printf("element : : %d",pointer -> data);
        pointer = poniter -> next;
    }

}

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    begin(head,&543);
    display(head);

}
