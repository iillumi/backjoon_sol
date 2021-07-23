// n/9했을때 안되는 수들 찾는 식 만들기
// 시간초과....
#include <stdio.h>

int main () {
	int t,n;
	int a,b;
	int count;
	scanf("%d", &t);
	for (int i=0;i<t;i++) {
		scanf("%d", &n);
		count=0;
		if(n%9==0){
			for(int j=n;j<n+100;j++){
				a=j;
				b=0;
				count++;
				while(a){
					b+=a%10;
					a/=10;
				}
				if(n+b==j){
					printf("%d ",j);
					break;
				}
				if(count==100) printf("-1 ");
			}
		}
		else printf("-1 ");
	}
	return 0;
}
