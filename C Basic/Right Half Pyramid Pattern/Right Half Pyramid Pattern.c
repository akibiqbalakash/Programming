#include <stdio.h>

int main()
{
   int n,i,j;

      printf("enter a number :");
        scanf("%d",&n);               //input number.

        for(i=0;i<=n;i++) {         //1st loop print n.
                for(j=0;j<=i;j++){   //2nd loop print character in each n.
                    printf("*");     //print *
                }
             printf(" \n");       //new line.
        }

    return 0;
}
