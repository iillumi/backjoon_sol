#include <stdio.h>

int n;
int arry[2][100]={0,};
int count=0;
int sel[100]={0,};

int main () {
	int a;
	scanf("%d", &n);
	for (int i=0;i<n;i++) {
		arry[0][i]=i+1;
		scanf("%d", &arry[1][i]);
	}
	for(int i=0;i<n;i++) {
		a=arry[1][i];
		for(int j=0;j<n;j++){
			if(arry[0][j]==a && arry[0][i]==arry[1][j]) {
				count++;
				sel[i]=arry[0][i];
			}
		}
	}
	printf ("%d\n", count);
	for (int i=0;i<n;i++) {
		if(sel[i]!=0) printf("%d\n", sel[i]);
	}

	return 0;
}
