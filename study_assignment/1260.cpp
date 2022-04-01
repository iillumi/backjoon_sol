#include <iostream>
#include <queue>

using namespace std;

void DFS(int (*)[1001], int*, int, int);
void BFS(int (*)[1001], int*, int, int);

int main() {
	int n, m, v;
	int arry[1001][1001] = { 0, };
	int visitarr[1001] = { 0, };
	int x, y;

	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		arry[x][y] = 1;
		arry[y][x] = 1;
	}
	DFS (arry, visitarr, v, n);
	cout << endl;
	BFS (arry, visitarr, v, n);
	return 0;
}

void DFS(int arry[][1001], int *visitarry, int v, int n) {
	cout << v << ' ';
	visitarry[v] = 1;

	for (int i = 1; i <= n; i++) {
		if (visitarry[i] == 1 || arry[v][i] == 0) continue;
		DFS(arry, visitarry, i, n);
	}
}

void BFS(int arry[][1001], int *visitarr, int v, int n) {
	queue<int> q;
	q.push(v);
	visitarr[v] = 2;
	while (!q.empty()) {
		v = q.front();
		cout << v << ' ';
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (visitarr[i] == 2 || arry[v][i] == 0) continue;
		q.push(i);
		visitarr[i] = 2;
		}
	}
}

