#include <stdio.h>

int main () {
	long long int min, max;
	int count=0;
	int arry[1000000]={0,};
	long long int num;
	scanf("%lld %lld", &min, &max);
	for (long long int i=2;i*i<=max;i++) {
		num=min/(i*i);
		if(num*i*i!=min) num++;
		for(long long int j=num; i*i*j<=max;j++) {
			arry[j*i*i-min]=1;
		}
	}
	for (int i=0;i<(max-min+1);i++) {
		if(!arry[i]) count++;
	}
	printf ("%d\n", count);

	return 0;
}
