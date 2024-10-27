//program to print Simple Calculator using switch case statement

#include<stdio.h>

int main()
{

 float num1,num2,results;
char operations;

  printf("*Simple Calculators*\n\n");
 printf("Enter the number:\n");
scanf("%f",&num1);

printf("\nEnter operators(+,-,*,/)\n\n");
scanf("%c",&operations);

printf("\nEnter the number 2:\n");
scanf("%f",&num2);

switch (operations)
{
    case'+':
    results= num1 + num2;
    break;
    case'-':
    results= num1 - num2;
    break;
    case'*':
    results= num1 * num2;
    break;
    case'/':
    results= num1 / num2;
    break;

 default:
   printf("Invalid operation\n");
     return 1;
}
   printf("Result:%2f\n",results);

return 0;
}
for(i)





