#include <stdio.h>

void DFS(int row, int colume, int arry[][colume]);

int main () {
	int testcase;
	int rowsize, columsize; // input arry size
	int cabbage; // number of cabbage
	int row, colum; // set cabbage point
	int count; // bug's num
	scanf ("%d", &testcase);
	scanf ("%d %d %d", &columsize, &rowsize, &cabbabge);
	int arry[rowsize][columszie]={0,};
	for (int i=0;i<testcase;i++){ // set cabbage
		scanf("%d %d", &colum, &row);
		arry[row][colum]=1;
	}
	return 0;
}

