#include <stdio.h>

int main (){
    int x,b;
	int i=0;
	char remainder[40]={0,};
    scanf("%d %d", &x, &b);
	if(x<0 && b>0) {
		remainder[0]='-';
		x=-x;
	}
	if(x==0) printf("0");
    while (x){
		if(b>0) {
			remainder[++i]=x%b;
		}
		else {
			remainder[++i]+=x%b;
			if(remainder[i]<0){
				remainder[i]-=b;
			}
			x-=remainder[i];
		}
		x/=b;
	}

	if(remainder[0]=='-') printf("-");
	for(int j=i;j>0;j--){
		printf ("%d", remainder[j]);
	}
	printf("\n");
	return 0;
}
