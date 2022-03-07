#include <iostream>

using namespace std;

class Queue {
	private :
		int front, end;
		int arry[10000];

	public :
		Queue() : front(0), end(0), arry{}
		{};

		void QueuePush(int);
		int QueuePop();
		int QueueSize();
		int QueueEmpty();
		int QueueFront();
		int QueueBack();
};

int main () {
	Queue Q1;
	int n, num;
	string command;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			Q1.QueuePush(num);
		}
		else if (command == "pop") cout << Q1.QueuePop() << endl;
		else if (command == "size") cout << Q1.QueueSize() << endl;
		else if (command == "empty") cout << Q1.QueueEmpty() << endl;
		else if (command == "front") cout << Q1.QueueFront() << endl;
		else if (command == "back") cout << Q1.QueueBack() << endl;
	}
	return 0;
}

void Queue::QueuePush(int data) {
	arry[end]=data;
	end++;
}

int Queue::QueuePop() {
	if (front == end) return -1;
	else return arry[front++];
}

int Queue::QueueSize() {
	return end-front;
}

int Queue::QueueEmpty() {
	if (front == end) return 1;
	else return 0;
}

int Queue::QueueFront() {
	if (front != end) return arry[front];
	else return -1;
}

int Queue::QueueBack() {
	if (front != end) return arry[end-1];
	else return -1;
}
