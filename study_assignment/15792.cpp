#include <iostream>

using namespace std;

int main () {
	int a, b;
	cin >> a >> b;
	cout << a/b << '.'; //몫 출력
	for (int i=0;i<1000;i++) { //나머지 출력
		a=a%b*10;
		cout << a/b;
	}
	return 0;
}
