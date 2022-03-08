#include <iostream>

using namespace std;

int main () {
	int arry[10000] = {0, };
	int n, num;
	int index=0;
	string command;

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			arry[index++] = num;
		}
		else if (command == "pop") {
			if (index != 0) {
				cout << arry[index-1] << endl;
				index--;
			}
			else cout << -1 << endl;
		}
		else if (command == "size") {
			cout << index << endl;
		}
		else if (command == "empty") {
			if (index == 0) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (command == "top") {
			if (index != 0) cout << arry[index-1] << endl;
			else cout << -1 << endl;
		}
	}

	return 0;
}
