#include <iostream>

using namespace std;

int main () {
	string command;
	int index;
	int arry[10000]={0,};
	int n;
	int front, end;
	front=0;
	end=0;
	cin >> n;
	for (int i=0;i<n;i++) {
		cin >> command;
		if (command == "push") {
			cin >> index;
			arry[end]=index;
			end++;
		}
		else if (command == "pop") {
			if (front != end) {
				cout << arry[front] << endl;
				front++;
			}
			else cout << -1 << endl;
		}
		else if (command == "size") {
			cout << end - front << endl;
		}
		else if (command == "empty") {
			if (front == end) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (command == "front") {
			if (front == end) cout << -1 << endl;
			else cout << arry[front] << endl;
		}
		else if (command == "back") {
			if (front == end) cout << -1 << endl;
			else cout << arry[end-1] << endl;
		}
	}
	return 0;
}
