//refer to https://jm25.tistory.com/53

#include <stdio.h>

int main () {
		int end,num;
		int start=1;
		int index=1;
		int arry[10]={0,};
        scanf("%d", &end);
	while (start<=end){
        while(start%10!=0 && start<=end){
			arry[start%10]+=index;	
			start++;
		}
		if(start>end){
			for (int i=0;i<10;i++) printf ("%d ", arry[i]);
			return 0;
		}
		while (end%10!=9 && start<=end){
			num=end;
			while (num>0) {
				arry[num%10]+=index;
				num/=10;
			}
			end--;
		}
		for(int i=0;i<10;i++) {
			arry[i]=arry[i]+index*(end/10-start/10+1);	
		}
		end/=10;
		start/=10;
		index*=10;
	}
	
        for (int i=0;i<10;i++) printf ("%d ", arry[i]);
        return 0;
}
