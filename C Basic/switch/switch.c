#include<stdio.h>
int main(){

  int d;

     printf("enter a digit : ");
      scanf("%d",&d);            // input digit

      switch(d)                      // switch( expression )
      {
          case  0:                    //The value of the expression is compared with the values of each case
               printf("zero \n");
                    break;
         case  1:
               printf("one \n");
                    break;               //  break statement breaks out of the switch block
         case 2:
               printf("two \n");
                      break;
         case  3:
               printf("three \n");
                       break;
         case  4:
               printf("four \n");
                      break;
         case  5:
               printf("five \n");
                     break;
      }
 return 0;
}
