#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node*next;
};


//logic for traversing

void count_list(struct node *pointer) {
	int count = 0;
	while(pointer != NULL) {
		count = count + 1;
		pointer = pointer -> next;
	}

	printf("%d",count);
}

int main() {
	struct node * head;
	struct node * second;
	struct node * third;
	
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	
		
	head -> data = 76;
	head -> next = second;

	second -> data = 875;
	second -> next = third;

	third -> data = 53;
	third -> next = NULL;

	count_list(head);

	return 0;

}
