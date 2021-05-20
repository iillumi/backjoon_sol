#include <stdio.h>
#include <math.h>

int sol(int, int, int, int);

int main () {
	int testcase, dot;
	int arry[20][2]={0,};
	double result;
	scanf ("%d", &testcase);
	for (int i=0;i<testcase;i++){
		x=0;
		y=0;
		scanf ("%d ", &dot);
		for (int j=0;j<dot;j++){
			scanf("%d %d", &arry[j][0], &arry[j][1]);
		}
		result = sol(&arry[][0], dot, 0, 0);
		printf ("%.12lf\n", result);
	}
	return 0;
}

int sol (int arry[][0], int dot, int count, int index){
	int reuslt;
	return result;
}
