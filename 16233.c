// n/9했을때 안되는 수들 찾는 식 만들기
#include <stdio.h>

int main () {
	int t,n;
	int a,b;
	int count=10;
	scanf("%d", &t);
	for (int i=0;i<t;i++) {
		scanf("%d", &n);
		if(n%9==0){
			for(int i=n;i<n+100;i++){
				a=i;
				b=0;
				while(a){
					b+=a%10;
					a/=10;
				}
				if(n+b==i){
					printf("%d ",i);
					break;
				}
			}
		}
		else printf("-1 ");
	}
	return 0;
}
