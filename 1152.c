#include <stdio.h>
#include <string.h>

int main () {
        int count=0;
        char a[1000000];
        char *token;

        fgets(a, 1000000, stdin);
        token=strtok(a," \n");

        while (token !=NULL) {
                count++;
                token=strtok(NULL, " \n");
        }
        printf ("%d\n",count);
        return 0;
}

