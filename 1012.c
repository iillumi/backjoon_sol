#include <stdio.h>

int rowsize, columsize; // arry size
int arry[50][50]={0,};
int moveX[4]={1,0,-1,0};
int moveY[4]={0,1,0,-1};

void DFS(int row, int colum);

int main () {
	int testcase;
	int cabbage; // number of cabbage
	int row, colum; // set cabbage point
	int count; // bug's num
	scanf ("%d", &testcase);
	for (int i=0;i<testcase;i++){ // set cabbage
		count = 0;
		scanf ("%d %d %d", &columsize, &rowsize, &cabbage);
		for (int j=0;j<cabbage;j++){
			scanf("%d %d", &colum, &row);
			arry[row][colum]=1;
		}
	
		for (int i=0;i<rowsize;i++) {
			for (int j=0;j<columsize;j++){
				if(arry[i][j]==1){
					DFS(i, j);
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}

void DFS (int row, int colum){
	if (arry[row][colum]==1){
		arry[row][colum]=0;
		for (int i=0;i<4;i++){
			int y=moveX[i]+colum;
			int x=moveY[i]+row;
			if (x>=0&&y>=0&&y<columsize&&x<rowsize) DFS(x, y);
		}
	}
}
