#include <iostream>

using namespace std;

int main () {
	int testcasenum;
	int a, b, sol;
	cin >> testcasenum;
	for (int i=0;i<testcasenum;i++){
		cin >> a >> b;
		sol = a;
		for (int j=1;j<b;j++){
			sol = sol*a%10;
		}
		if (b==1){
			sol=sol%10;
			if (sol == 0) sol = 10;
			cout << sol << endl;
		}
		else{
			if (sol == 0) sol = 10;
			cout << sol << endl;
		}
	}
	return 0;
}
