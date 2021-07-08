#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int x,b;
	int quotient;
	int remainder=0;
	int count=0;
	scanf("%d %d", &x, &b);
	while (abs(x)>abs(b)){
		if(b>0) remainder+=(x%b)*pow(10,count);
		else remainder+=(x%10)*pow(-10,count);
		x/=b;
		count++;
	}

	if(b>0){
        	remainder+=(x%b)*pow(10,count);
	}
        else {
        	remainder+=(x%10)*pow(-10,count);
	}

	printf ("%d\n", remainder);
	return 0;
}
