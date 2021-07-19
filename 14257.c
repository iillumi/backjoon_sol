#include <stdio.h>

int main (){
        long long int s,x,sub,count;
        long long int a=0;
        int arry[45]={0,};
        scanf("%lld %lld", &s, &x);
        sub=s-x;
        if(sub<0 || (s%2!=x%2)) printf("0\n");
        else{
                sub/=2;
                for(int i=0;x;i++) {
                        arry[i]=x%2;
                        x/=2;
                        if(arry[i]==1) a++;
                }
				count=sub;
                for(int i=0;sub;i++){
                        if(sub%2==1 && arry[i]==1){
                                printf("0\n");
                                return 0;
                        }
                        sub/=2;
                }
                if(count==0)printf("%lld\n", (1LL<<a)-2);
                else printf("%lld\n", 1LL<<a);
        }
        return 0;
}
