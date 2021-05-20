#include <stdio.h>
#include <math.h>

double sol(int, int, int, int);

int main () {
	int testcase, dot;
	int arry[20][2]={0,};
	double result;
	scanf ("%d", &testcase);
	for (int i=0;i<testcase;i++){
		scanf ("%d ", &dot);
		for (int j=0;j<dot;j++){
			scanf("%d %d", &arry[j][0], &arry[j][1]);
		}
		result = sol(&arry[][0], dot, 0, 0);
		printf ("%.12lf\n", result);
	}
	return 0;
}

double sol (int arry[][0], int dot, int count, int index){
	double reuslt;
	double x=0;
	double y=0;
	int data[20]={0,}
	//20C10 구하는 코드 구현
	for (int i=0;i<dot;i++){
		if(data[i]==1){
			x+=arry[i][0];
			y+=arry[i][1];
		}
		else {
			x-=arry[i][0];
			y-=arry[i][1];
		}
	}
	return result;
}
