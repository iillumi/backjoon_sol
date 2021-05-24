#include <stdio.h>
#include <stdlib.h>

int arry[25][25]={0,}; // map's size
int n;
int arryX[4]={1,0,-1,0};
int arryY[4]={0,1,0,-1};
int count=0;
int house[323]={0,}; // house's number

void sol(int, int); //use DFS

int compare(const void *, const void *); //use qsort();

int main () {
	scanf("%d", &n);
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++){
			scanf("%1d", &arry[i][j]);
		}
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++){
			if(arry[i][j]==1) {
				sol(i,j);
				count++;
			}
		}
	}
	qsort(house, count, sizeof(house[0]), compare); 
	printf ("%d\n", count);
	for(int i=0;i<count;i++) {
		printf ("%d\n", house[i]);
	}
	
	return 0;
}

void sol(int x, int y) {
	if(arry[x][y]==1) {
		house[count]++;
		arry[x][y]=0;
		for (int i=0;i<4;i++) {
			int X=arryX[i]+x;
			int Y=arryY[i]+y;
			if (X>=0 && Y>=0 && X<n && Y<n) sol(X, Y);
		}
	}
}

int compare(const void *a, const void *b) { // Refer to "https://edu-coding.tistory.com/27"
	if (*(int*)a>*(int*)b) return 1;
	else if (*(int*)a<*(int*)b) return -1;
	else return 0;
}
