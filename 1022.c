// refer to https://stackoverflow.com/questions/17566886/how-does-d-work-in-printf#
// '%*d'

#include <stdio.h>
#include <math.h>

int main () {
	int r1,c1,r2,c2;
	int arry [50][5]={0,};
	int num=1;
	int count=0;
	int x=0;
	int y=0;

	scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
	if(r1<=y && r2>=y && c1<=x && c2>=x) 
		arry[y-r1][x-c1]=num;


	

	while (num>0){
		num/=10;
		count++;
	}
	for(int i=0;i<=r2-r1;i++){
		for (int j=0;j<=c2-c1;j++){
			printf ("%*d ", count, arry[i][j]);
		}
		printf("\n");			
	}


	return 0;
}

// 피라미드 형식으로 보이며
// 4*r*r+1+r-c / r<0 |r|>=|c|
// 4*c*c+1+r-c / c<0 |c|>=|r|
//
