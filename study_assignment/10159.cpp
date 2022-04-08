#include <iostream>

using namespace std;

int main () {
	int n, m;
	int arry[101][101] = {0, };
	int big, small;
	int count;
	cin >> n >> m;

	for (int i=0; i<m; i++){
		cin >> big >> small;
		arry[big][small] = 1;
		arry[small][big] = -1;
	}

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			for (int k=1; k<=n; k++) {
				if (arry[j][i]==arry[i][k] && arry[j][i]!=0){
					arry[j][k]=arry[j][i];
				}
			}
		}
	}

	for (int i=1; i<=n; i++) {
		count = 0;
		for (int j=1; j<=n; j++) {
			if (arry[i][j]==0) count++;
		}
		cout << count-1 << endl;
	}

	return 0;
}
