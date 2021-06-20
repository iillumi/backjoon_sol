#include <stdio.h>

int main () {
        int n,m;
        int sum=0;
	int min=9999999;
        int arry[10001]={0,};
        scanf("%d %d", &n,&m);
	if(n==1) arry[1]=1;
        for (int i=n;i<=m;i++){
                for(int j=2;j<i;j++) {
                        if(i%j==0){
                                arry[i]=1;
                                break;
                        }
                }
        }
        for (int i=n;i<=m;i++) {
                if(arry[i]==0) {
			sum+=i;
			if(min>i) min=i;
		}
        }
        if (sum==0) printf ("-1\n");
        else printf ("%d\n%d\n", sum, min);
        return 0;
}

