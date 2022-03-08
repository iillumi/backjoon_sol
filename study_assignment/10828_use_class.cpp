#include <iostream>

using namespace std;

class Stack {
	private :
		int arry[10000];
		int index;
	public :
		Stack() : arry{}, index(0)
		{}

		void StackPush (int);
		int StackPop ();
		int StackSize ();
		int StackEmpty ();
		int StackTop ();
};

int main () {
	int n, num;
	string command;
	Stack S1;

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			S1.StackPush (num);
		}
		else if (command == "pop") cout << S1.StackPop() << endl;
		else if (command == "size") cout << S1.StackSize() << endl;
		else if (command == "empty") cout << S1.StackEmpty() << endl;
		else if (command == "top") cout << S1.StackTop() << endl;
	}

	return 0;
}

void Stack::StackPush (int num) {
	arry[index++] = num;
}

int Stack::StackPop () {
	if (index != 0) {
		index--;
		return arry[index];
	}
	else return -1;
}

int Stack::StackSize () {
	return index;
}

int Stack::StackEmpty () {
	if (index == 0) return 1;
	else return 0;
}

int Stack::StackTop () {
	if (index != 0) return arry[index-1];
	else return -1;
}
