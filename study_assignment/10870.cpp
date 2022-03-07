#include <iostream>

using namespace std;

int main () {
	int n; //test 할 값
	int Fn, Fn_1, Fn_2; //피보나치 식을 사용하기 위한 변수
	cin >> n;
	Fn_1=1;
	Fn_2=0;
	if (n==0) Fn=0;
	else if (n==1) Fn=1;
	else {
		for (int i=0;i<n-1;i++) {  //피보나치 계산 (1부터 시작이므로 n-1까지 계산)
			Fn = Fn_1 + Fn_2;
			Fn_2 = Fn_1;
			Fn_1 = Fn;
		}
	}
	cout << Fn << endl;
	return 0;
}
