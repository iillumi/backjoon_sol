#include <stdio.h>
#include <math.h>

int main () {
	int testcase;
	int start, end;
	int d;
	int root;
	scanf("%d", &testcase);
	for (int i=0;i<testcase; i++) {
		scanf ("%d %d", &start, &end);
		d=end-start;
		root=(int)sqrt(d);
		if(root*root==d){
			printf ("%d\n", 2*root-1);
		}
		else if (root*root<d&&d<=root*root+root) {
			 printf ("%d\n", 2*root);
		}
		else {
			 printf ("%d\n", 2*root+1);
		}
	}
	return 0;
}

//	거리	값		이동수
//	1	1		1
//	2	11		2
//	3	111		3
//	4	121		3
//	5	1211		4
//	6	1221		4
//	7	12211		5
//	8	12221		5
//	9	12321		5
//	10	123211		6
//	11	123221		6
//	12	123321		6
//	13	1233211		7
//	14	1233221		7
//	15	1233321		7
//	16	1234321		7
//	17	12343211	8
