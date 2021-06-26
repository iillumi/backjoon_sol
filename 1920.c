#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
	if(*(int*)a>*(int*)b) return 1;
	else if (*(int*)a<*(int*)b) return -1;
	else return 0;
}

void sol(int n, int num, int *arry){
	int start=0;
	int end=n-1;
	int mid;

	while(end-start>=0){
		mid=(start+end)/2;
		if(arry[mid]==num) {
			printf ("1\n");
			return;
		}
		else if (arry[mid]>num){
			end=mid-1;
		}
		else start=mid+1;
	}
	printf ("0\n");
	return;
}

int main () {
	int n,m;
	int num;
	int arry[100000]={0,};
	scanf("%d", &n);
	for (int i=0;i<n;i++) {
		scanf("%d", &arry[i]);
	}
	qsort (arry, n, sizeof(arry[0]),compare);
	scanf("%d", &m);
	for (int i=0;i<m;i++) {
		scanf("%d", &num);
		sol(n, num, &arry[0]);
	}
	return 0;
}
