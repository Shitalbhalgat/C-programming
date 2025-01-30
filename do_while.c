#include<stdio.h>
int main()
{
    //Menu Driven program
    // char ch;
    // do{
    //     printf("\n\n********Menu Driven program  using do while loop**********\n");
    //     printf("1) Area of circle\n");
    //     printf("2)Area of Trianlge\n");
    //     printf("3) Area of rectanlge\n");
    //     printf("Q) Quit\n ");
    //     printf("Enter your choice: ");
    //     scanf(" %c",&ch);
    //     if(ch=='1')
    //     {
    //               int r;
    //               printf("Enter a value of radius ");
    //               scanf("%d",&r);
    //               printf("Area of circle is : %f",(float).14*r*r);
    //               
    //      }else if (ch=='2')
    //      {
    //               float height,base;
    //               printf("Enter a value of height and base ");
    //               scanf("%d%d",&height,&base);
    //               printf("Area of triangle is : %f",0.5*height*base);
    //               
    //      }
    //     else if(ch=='3')
    //     {
    //      int l,b;
    //               printf("Enter a values of lenght and breath : ");
    //               scanf("%d%d",&l,&b);
    //               printf("Area of rectangle is :%d",l*b);
    //     }        
    //      else if(ch == 'q'||ch=='Q')
    //      { 
    //               printf("Quit from loop ");
    //     }
    //     else
    //     {
    //         printf("Try again....");
    //     }
    // }while(ch!='q'&& ch!='Q');

    //Asking a user to enter a positive number and calculate sum of this,if user enter negative number then  exit the program

     int n=0,sum=0;
    do{
        sum=sum+n;
        printf("\nenter a number :");
        scanf("%d",&n);
       printf("You enter a number is :%d ",n);
    }while(n>=0);
    printf("\n sum of given number : %d",sum);
}
// calculate the additon of two number until user press NO
//    int n1,n2;
//      char ch;
//     do{
//        
//         printf("\nenter a two numbers :");
//         scanf("%d%d",&n1,&n2);
//         printf("Addition of two number is:%d",n1+n2);
//        printf("\n Do you want to continue press(Y/y):");
//        scanf(" %c",&ch);
//     }while(ch=='y'||ch =='Y');
//     printf("out of loop");
// }