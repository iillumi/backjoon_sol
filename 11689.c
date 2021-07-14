#include <stdio.h>

int main () {
	long long int n;
	long long int count=0;
	scanf("%lld", &n);
	count=n;
	for (long long int i=2;i*i<=n;i++) {
		if(n%i==0){
			while (n%i==0) n/=i;
			count/=i;
			count*=(i-1);
		}
	}
	if(n!=1){
		count/=n;
		count*=(n-1);
	}
	printf ("%lld\n", count);
	return 0;
}
