#include <stdio.h>
#include <string.h>

int n;
int arry[2][100]={0,};
int count=0;
int sel[100]={0,};
int check[100];

int sol(int, int);

int main () {
	scanf("%d", &n);
	for (int i=0;i<n;i++) {
		arry[0][i]=i+1;
		scanf("%d", &arry[1][i]);
	}
	for(int i=0;i<n;i++) {
		if(sol(i,i)){
			sel[count]=i+1;
			count++;
		}
		memset(check,0,sizeof(check));
	}
	
	printf ("%d\n", count);
	for (int i=0;i<count;i++) {
		printf("%d\n", sel[i]);
	}

	return 0;
}

int sol (int data, int current) { // refer to "https://3dpit.tistory.com/12"
	if(check[current]==0){
		check[current]=1;
		sol(data, arry[1][current]-1);
	}
	else {
		if(data==current) return 1;
		else return 0;
	}
}
