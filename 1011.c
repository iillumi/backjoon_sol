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
