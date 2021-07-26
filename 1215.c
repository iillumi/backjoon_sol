#include <stdio.h>

int main () {
	int n,k;
	long long int r=0;
	scanf("%d %d", &n, &k);
	if(n>k){
		r=k*(n-k);
		n-=k;
	}
	for(int i=1;i<=n;i++) {
		r=r+k-k/i*i;
	}
	printf("%lld\n", r);
	return 0;
}
