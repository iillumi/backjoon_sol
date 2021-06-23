#include <stdio.h>

int main () {
	int num;
	int count=0;
	scanf("%d", &num);
	for (int i=1;i<=num;i++) {
		if(i<100) count++;
		else if ((i/100)-((i%100)/10) == ((i%100)/10)-((i%100)%10)) count++;
	}
	printf ("%d\n", count);
	return 0;
}
