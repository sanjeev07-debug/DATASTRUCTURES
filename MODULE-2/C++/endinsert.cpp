#include<iostream>
#include<stdlib.h>

using namespace std;

struct node {
  int data;
  struct node * next;
};

// logic for inserting the node at the end of the array

void end(int value) {
  struct node * newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode -> data = value;
  newnode -> next = NULL;
  if(head == NULL) {
    head = newnode;
  }
  else {
    struct node * pointer = head;
    while(pointer -> next != NULL) {
      pointer = pointer -> next;
    }
    pointer -> next = newnode;
  }
}

void display(struct node * ptr) {
    while(ptr != NULL) {
      cout << ptr -> data;
      ptr = ptr -> next;
    }
}

int main() {
    struct node * head;
    struct node * second;
    struct node * third;

    head = (struct node *)malloc(sizof(struct node));
    second = (struct node *)malloc(sizof(struct node));
    third = (struct node *)malloc(sizof(struct node));

    head -> data = 56;
    head -> next = second;

    second -> data = 36;
    second -> next = third;

    third -> data = 23;
    second -> next = NULL;

    // now call the functions for end insert and printing the node

    end(56);
    display(head);
    return 0;
}
