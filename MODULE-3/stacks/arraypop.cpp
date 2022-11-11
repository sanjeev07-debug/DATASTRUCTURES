#include<iostream>
using namespace std;

int stack[100];n=100;t=-1;

void pop(int value) {
	if(t==null) {
		cout << "overflow" << endl;
	}

	value = stack[t];
	top = top - 1;
}

int main() {
	int value;
	cout << "enter the values" << endl;
	cin >> value;

	pop(value);

	return 0;
}
