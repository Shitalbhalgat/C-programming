//Syntax of if statement
/*
    if(condition)
    {
       code to be excuted
    }
*/

#include<stdio.h>
int main()
{ 
    int x=10;
    // 1st statment is excuted after if block if condition is true
    if(x>10)
      printf("value of x is greater than 10");
    printf("value of x is less than 10"); 
// both statments is excuted after if block either condition is true or flase
    if(x>10);
      printf("\n value of x is greater than 10");
      printf( "\n value of x is less than 10");
//Both statments is excuted after if block if the  condition is true
    if(x>10)
    {
      printf( "\nvalue of x is greater than 10");
      printf("\nvalue of x is less than 10"); 
    }
    // 1st statment is excuted after if block if the  value of x is other than zero
    if(x)
      printf( "\n value of x is greater than 10");
    printf("\n value of x is less than 10"); 
  // If block excuted always bz value is asign to variable
    if(x=10)
    {
      printf("\n if block excuted");
    } 

}
