// refer to https://stackoverflow.com/questions/17566886/how-does-d-work-in-printf#
// '%*d'

#include <stdio.h>
#include <math.h>

int main () {
        int r1,c1,r2,c2;
        int arry [50][5]={0,};
        int num=1;
        int count=0;
        int row=0;
        int colum=0;

        scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
        if(r1<=0 && c1<=0 && r2>=0 && c2>=0) arry[row-r1][colum-c1]=num;

        for (int i=r1;i<=r2;i++){
                for (int j=c1;j<=c2;j++){
                        row=i-r1;
                        colum=j-c1;

                        if (i<0 && abs(i)>=abs(j)) arry[row][colum]=4*i*i+1+i-j;
                        else if (j<0 && abs(i)<abs(j)) arry[row][colum]=4*j*j+1+i-j;
                        else if (i>0 && abs(i)>=abs(j)) arry[row][colum]=4*i*i+3*i+1+j;
                        else if (j>0 && abs(i)<abs(j)) arry[row][colum]=4*j*j-3*j+1-i;


                        if(arry[row][colum]>num) num=arry[row][colum];
                }
        }



        while (num>0){
                num/=10;
                count++;
        }
        for (int i=0;i<=r2-r1;i++){
                for (int j=0;j<=c2-c1;j++){
                        printf ("%*d ", count, arry[i][j]);
                }
                printf("\n");
        }


        return 0;
}

// 피라미드 형식으로 보이며'r is row / c is colum'
// 4*r*r+1+r-c   / r<0 && |r|>=|c|        up
// 4*c*c+1+r-c   / c<0 && |r|<|c|         left
// 4*r*r+3*r+1+c / r>0 && |r|>=|c|        down
// 4*c*c-3*c+1-r / c>0 && |r|<|c|         right
