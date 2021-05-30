#include <stdio.h>
#include <math.h>

int main () {
	long long int min, max;
	int count=0;
	int arry[1000000]={1,};
	double cal;
	scanf("%lld %lld", &min, &max);
	for (long long int i=2;i*i<=max;i++) {
	}

	for (int i=0;i<(max-min);i++) {
		if (arry[i]) count++;
	}
	printf ("%d\n", count);

	return 0;
}
