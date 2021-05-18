#include <stdio.h>

int rowsize, columsize; // arry size
int arry[50][50]={0,};

void DFS(int row, int colume);

int main () {
	int testcase;
	int cabbage; // number of cabbage
	int row, colum; // set cabbage point
	int count; // bug's num
	scanf ("%d", &testcase);
	scanf ("%d %d %d", &columsize, &rowsize, &cabbabge);
	for (int i=0;i<testcase;i++){ // set cabbage
		scanf("%d %d", &colum, &row);
		arry[row][colum]=1;
	}
	for (int i=0;i<row;i++) {
		for (int j=0;j<colum;j++){
			if(arry[row][colum]==1){
				DFS(row, colum);
		}
	}
	return 0;
}

void DFS (int row, int colume){
	
}
