#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct node {
  int data;
  struct node * next;
};
void begin(int value) {
    newnode = (struct node * )malloc(sizeof(struct node));
    newnode -> data = value;

    if(head == NULL) {
      newnode -> next = NULL;
      head = newnode;
    }

    else {
      newnode -> next = head;
      head = newnode;
    }
//    newnode -> next = head;
//    head = newnode;

}
void display(struct node * head) {
    struct node * pointer = head;

    while(pointer != NULL) {
    printf("%d",pointer -> data);
    pointer = pointer -> next;

    }
    printf("NUll\n");
}

int main() {
struct node *head;
struct node *second;
struct node *third;




  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  head -> data = 56;
  head -> next = second;

  second -> data = 232;
  second -> next = third;

  third -> data = 435;
  third -> next = NULL;

  begin(52);
  display(head);

  return 0;
}
