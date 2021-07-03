// refer to https://blog.naver.com/ndb796/221282210534

#include <stdio.h>

int main () {
	int n,m,k,a,b,c;
	scanf("%d %d %d", &n, &m, &k);
	long long int arry[n+1]={0,};
	long long int sum=0;
	for(int i=1;i<=n;i++) {
		scanf("%lld", &arry[i]);
	}
	// segment tree 작성

	return 0;
}
