
#include <stdio.h>
int main()
{
char operator;
int num1,num2;
printf("\n Enter the operator (+, -, *, /):");
scanf("%c",&operator);
printf("Enter the Two numbers:\n");
scanf("%d%d",&num1,&num2);
switch (operator)
{
case '+':
printf("%d+%d=%d",num1,num2,num1+num2);
break;
case '-':
printf("%d-%d=%d",num1,num2,num1-num2);
break;
case '*':
printf("%d*%d=%d",num1,num2,num1*num2);
break;
case '/':
printf("%d / %d = %d",num1,num2,num1/num2);
break;
default:
printf(" Enter the operator only");
break;

}
}

getch();
