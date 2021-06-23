#include <stdio.h>

int main () {
	char arry[8][8];
	int count=0;
	for (int i=0;i<8;i++) {
		scanf("%s",arry[i]);
	}
	for (int i=0;i<8;i++) {
		if(i%2==1) {
			for (int j=1;j<8;j+=2) {
				if(arry[i][j]=='F') count++;
			}
		}
		else {
			  for (int j=0;j<8;j+=2) {
                                if(arry[i][j]=='F') count++;
                        }

		}
	}
	printf ("%d\n", count);
	return 0;
}
