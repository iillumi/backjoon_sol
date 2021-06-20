#include <stdio.h>
#include <string.h>

int main () {
	int n;
	char arry[51][51]={0,};
	char sol[51]={0,};
	scanf("%d", &n);
	for (int i=0;i<n;i++) {
		scanf("%s", arry[i]);
	}
	strcpy(sol, arry[0]);
	for (int i=0;i<n;i++) {
		for (int j=0;j<51;j++) {
			if(sol[j]!='?' && sol[j]!=arry[i][j]) sol[j]='?';
		}
	}
	printf("%s\n", sol);
	return 0;
}
