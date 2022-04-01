#include <iostream>
#include <queue>

using namespace std;

int main () {
	int n, k;
	queue<int> q;
	int arry[100001] = {0, };
	int path[100001] = {0, };
	int count = 0;
	
	cin >> n >> k;
	arry[n] = 1;
	q.push(n);
	
	while (!q.empty()){
		if (q.front() == k) break;

		if (path[q.front()+1] == 0 && q.front()+1 < k) {
			q.push(q.front()+1);
			path[q.front()+1] = 1;
		}
		else if (path[q.front()-1] == 0 && q.front()-1 >= 0 ) {
			q.push(q.front()-1);
			path[q.front()-1] = 1;
		}
		else if (path[q.front()*2] == 0 && q.front()*2 < k) {
			q.push(q.front()*2);
			path[q.front()*2] = 1;
		}
		q.pop();
		count++;
	}
	return 0;
}
