/* 
  Syntax:
         (Expresion1) ? Expresion2:Expresion3
         if the expresion1 returns true then expresion2 will be excuted otherwise expresion3
*/
#include <stdio.h>
int main()
{
 //ternary operator or conditional operators
int x=10;

(!x)?printf("True"):printf("False");


//To find a maxmium between 2 numbers
int a,b;
printf("\nEnter a value of two numbers ");
scanf("%d %d",&a,&b);
(a>b)?printf("\n1st number is greater"):printf("\n2nd number is greater");

// minimum between three numbers
int p,q,r;
printf("\nEnter a value of three numbers : ");
scanf("%d %d %d",&p,&q,&r);
(p>q && p>r)?printf("\n1st number is greater"):(q>r?printf("\n2nd number is greater"):printf("\n3rd number is greater"));




}