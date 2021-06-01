#include <stdio.h>

int main () {
	int n;
	int num;
	int count=0;
	int arry[1001]={0,};
	scanf("%d", &n);
	for (int i=0;i<n;i++) {
		scanf("%d", &arry[i]);
	}
	for (int i=0;i<n;i++) {
		if(arry[i]==1) arry[i]=0;

		for (int j=2;j<arry[i];j++){
			if(arry[i]%j==0) arry[i]=0;
		}
	}
	for (int i=0;i<n;i++) {
		if(arry[i]) count++;
	}
	printf ("%d\n", count);
	return 0;
}
