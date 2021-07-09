//양수 진법 변환 O
//양수를 -10진법 변환 O
//나머지 X

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
        int x,b;
        int remainder=0;
        int count=0;
        scanf("%d %d", &x, &b);
        while (abs(x)>=abs(b)){
                if(b>0) remainder+=(x%b)*pow(10,count);
                else {
					if(count%2==0){
						remainder+=(x%b)*pow(10,count);
					}
					else{
						if(x%b!=0) {
							remainder+=pow(10,count+1)+pow(10,count+1)-(x%b*pow(10,count));
						}
					}
				}
                x/=abs(b);
                count++;
        }

        if(b>0) remainder+=(x%b)*pow(10,count);
        else {
                if(count%2==0){
						remainder+=(x%b)*pow(10,count);
					}
					else{
						remainder+=pow(10,count+1)+pow(10,count+1)-(x%b*pow(10,count));
					}
        }
	
        printf ("%d\n", remainder);
        return 0;
}

