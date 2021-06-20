#include <stdio.h>

int main () {
	int t,n,m;
	int sol[31][31]={0,};
	for (int i=0;i<31;i++){
		sol[1][i]=i;
	}
	for (int i=2;i<31;i++) {
		for (int j=i;j<31;j++) {
			for (int k=1;k<j;k++) {
				sol[i][j]+=sol[i-1][k];
			}
		}
	}
        scanf("%d", &t);
        for (int i=0;i<t;i++) {
                scanf("%d %d", &n, &m);
		printf ("%d\n", sol[n][m]);
	}
	return 0;
}
