#include <stdio.h>

void leftfind(int arry[][columsize], int resultarry[], int rowsize, int columsize);
void rightfind(int arry[][columsize], int resultarry[], int rowisze, int columsize);
void upfind(int arry[][columsize], int resultarry[], int rowisze, int columsize);
void downfind(int arry[][columsize], int resultarry[], int rowsize, int columsize);

int main () {
	int testcase;
	int rowsize, columsize; // input arry size
	int cabbage; // number of cabbage
	int row, colum; // set cabbage point
	scanf ("%d", &testcase);
	int resultarry[testcase]={0,}; // result
	for (int i=0;i<testcase;i++) {
		scanf ("%d %d %d", &columsize, &rowsize, &cabbae);
		int arry[rowsize][columsize]={0,};
		for (int j=0;j<cabbage;j++) { // set cabbage in the arry
			scanf("%d %d", &colum &row);
			arry[row][colum]=1;
		}
		
		downfind(arry, resultarry, rowsize, columsize);
		rightfind(arry, resultarry, rowsize, columsize);

	}
	return 0;
}

void leftfind (int arry[][columsize], int resultarry[], int rowsize, int columsize) {
}

void rightfind (int arry[][columsize], int resultarry[], int rowsize, int columsize) {
}

void upfinde (int arry[][columsize], int resultarry[], int rowsize, int columsize) {
}

void downfinde (int arry[][columsize], int resultarry[], int rowsize, int columsize) {
}
