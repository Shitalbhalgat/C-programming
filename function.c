#include<stdio.h>
//Fucntion with no return type ans no parameter
void display();
void main ()
{
  printf("Welcome to ");
  display();
}

void display()
{  
printf("C programming");
}

// 
// int main()
// {
//     int x,y;    
//     printf("Enter the two numbers to add:");
//     scanf("%d %d",&x,&y);
//     add(x,y);
// 
// }
// 
// // Accepting arguments with void return type
// void add(int x, int y)
// {
//  printf("The sum of the numbers is %d",x+y);
// 
// }
// 
// // Functions that Accept Arguments and Give a Return Value
// int add(int ,int);
// int main(){
// 
//     int x,y,res;    
// 
//     printf("Enter the two numbers to add:");
// 
//     scanf("%d %d",&x,&y);    
// 
//     res = add(x,y);
// 
//     printf("The sum of the numbers is %d",res);
// 
// }
// int add(int x, int y)
// {
// return x+y;
// } 
//Function with return type with no parameter
// int add();
// int main()
// {
//     int z ;
//    z= add();
//     printf("The sum of the numbers is %d",z);
// 
// }
// int add()
// {
//   int x,y;    
//   printf("Enter the two numbers to add:");
//   scanf("%d %d",&x,&y);
//   return x+y;
// } 
// char f1();
// int main()
// {
//     printf("The character %c",f1());
// 
// }
// char f1()
// {
//    char c;
//   printf("Enter a character :");
//   scanf("%c",&c);
//   return c;
// } 
