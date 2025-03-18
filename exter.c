#include<stdio.h> 
int fun();
int main()
{       
     extern int a;
    {
        printf("In block1 :%d",a);
    }
    {
        printf("\nIn block2 : %d",a++);
    }
     printf("\nin block : %d",a);
     fun();
}
int a=50;

int fun ()
{
    int a=30;
    printf("\n IN fun : %d",a);
}