#include <iostream>

using namespace std;

#define INF 2100000000

int main () {
	int n, m;
	int arry[101][101];
	int start, end, cost;
	cin >> n >> m;
	
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			arry [i][j]=INF;
		}
	}

	for (int i=0; i<m; i++) {
		cin >> start >> end >> cost;
		if (arry[start][end]>cost) arry[start][end] = cost;
	}
	
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			for (int k=1; k<=n; k++) {
				if(arry[j][i] != INF && arry[i][k] != INF) {
					if(arry[j][k] < arry[j][i]+arry[i][k])
						arry[j][k] = arry[j][k];
					else arry[j][k] = arry[j][i]+arry[i][k];
				}
			}
		}
	}

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			if (i==j || arry[i][j] == INF) cout << 0 << ' ';
			else cout << arry[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}
