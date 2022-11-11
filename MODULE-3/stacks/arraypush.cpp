#include<iostream.h>

using namespace std;

int stack[100],n=100,top=-1;

//for push operation in array first we need to declare an array

void push(int value) {
	if(top==n-1) {
		cout << "overflow" << endl;
	}
	else {
		top++;
		stack[top] = val;
	}
}

int main() {
	int val;

	cout << "enter the value" << endl;
	cin >> val;

	push(val);

	return 0
}

