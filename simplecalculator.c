#include<stdio.h>
#include<conio.h>
int main ()
{
    int num1;
    int num2;
    int sum;
    int prod;
    int diff;
    int rem;
    int quo;
    char op;

    printf ("Enter the First Number : ");
    scanf("%d",&num1);

    printf("\nEnter Second Number : ");
    scanf("%d",&num2);

     sum  = num1+num2;
     diff = num1-num2;
     prod = num1*num2;
     quo  = num1/num2;
     rem  = num1%num2;

    printf("\nEnter the operation to bew performed : ");
    scanf(" %c",&op);

    switch(op){
        case '+':
         printf("\n%d+%d=%d",num1,num2,sum);
          break;
        case '-':
         printf("\n%d-%d=%d",num1,num2,diff);
          break;
        case '*':
         printf("\n%d*%d=%d",num1,num2,sum);
          break;
        case '%':
         printf("\n%d remainder %d=%d",num1,num2,rem);
          break;
        case '/':
         printf("\n%d/%d=%d",num1,num2,quo);
          break;
        default :
         printf("\nTHE OPERATOR YOU ENETERED IS BEYOUND OUR IMAGINATION");
    }
    
    return 0;
}