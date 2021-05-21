#include <stdio.h>
#include <math.h>

int arry[20][2]={0,};
int testcase, dot;
double result;
int data[20]={0,};

void sol(int, int);

int main () {
	scanf ("%d", &testcase);
	for (int i=0;i<testcase;i++){
		result=9223372036854775806;
		scanf ("%d", &dot);
		for (int j=0;j<dot;j++){
			scanf("%d %d", &arry[j][0], &arry[j][1]);
		}
		sol(0, 0);
		printf ("%.12lf\n", result);
	}
	return 0;
}

void sol (int count, int index){
	double x=0;
	double y=0;
	//nCr 구하는 공식
	if (count == dot/2){
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
		if(result > sqrt(x*x+y*y)) result=sqrt(x*x+y*y);
		return;
	}
	if (index==dot) return;

	sol(count, index+1);
	data[index]=1;
	sol(count+1, index+1);
	data[index]=0;
}
