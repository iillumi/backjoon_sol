#include <stdio.h>
#include <string.h>

void sol(char *, int, char);

int main () {
        char arry[200];
	scanf("%s", arry);
        sol(arry, 0, 'S');
        return 0;
}

void sol (char *arry, int index, char state) {
        if(strlen(arry)==index){
                if(state=='D' || state=='E' || state=='H' || state=='S')
                        printf ("SUBMARINE\n");
                else printf ("NOISE\n");
                return;
        }

        if(state=='S'){
                if (arry[index]=='1') sol(arry, index+1, 'A');
                else if (arry[index]=='0') sol(arry,index+1,'G');
        }
        else if (state=='A'){
                if (arry[index]=='0') sol(arry, index+1, 'B');
                else printf ("NOISE\n");
        }
        else if (state=='B'){
                if (arry[index]=='0') sol(arry, index+1, 'C');
                else printf("NOISE\n");
        }
        else if (state=='C'){
                if (arry[index]=='1') sol(arry, index+1, 'D');
                else if (arry[index]=='0') sol(arry,index+1,'C');
        }
        else if (state=='D'){
                if (arry[index]=='1') sol(arry, index+1, 'E');
                else if (arry[index]=='0') sol(arry,index+1,'G');
        }

        else if (state=='E'){
                if (arry[index]=='1') sol(arry, index+1, 'E');
                else if (arry[index]=='0') sol(arry,index+1,'F');
        }
        else if (state=='F'){
                if (arry[index]=='1') sol(arry, index+1, 'H');
                else if (arry[index]=='0') sol(arry,index+1,'C');
        }
        else if (state=='G'){
                if (arry[index]=='1') sol(arry, index+1, 'H');
                else printf("NOISE\n");
        }
        else if (state=='H'){
                sol(arry, index, 'S');
        }

        return;
}
