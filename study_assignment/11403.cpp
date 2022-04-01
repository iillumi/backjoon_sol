#include <iostream>

using namespace std;

int main () {
	int n;
	int arry[101][101] = {0, };
	cin >> n;

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			cin >> arry[i][j];
		}
	}

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			for (int k=1; k<=n; k++) {
				if (arry[j][i] && arry[i][k]) arry[j][k]=1;
			}
		}
	}

	for (int i=1; i<=n; i++) {
                for (int j=1; j<=n; j++) {
                        cout << arry[i][j] << ' ';
                }
		cout << endl;
        }


	return 0;
}
