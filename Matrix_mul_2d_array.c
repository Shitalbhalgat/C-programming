#include<stdio.h>

int main()
{
     int i,j,r1,c1,r2,c2;
//Multiplication of 2d array
printf("Enter the no of rows for 1st array: ");
scanf("%d",&r1);
printf("\n Enter the no of coloums for 1st array :");
scanf("%d",&c1);
printf("Enter the no of rows for 2nd array:");
scanf("%d",&r2);
printf("\n Enter the no of coloums for 2nd array :");
scanf("%d",&c2);
int x[r1][c1],y[r2][c2],z[r1][c2];
if(c1==r2)
{
printf("\n Enter a Elements of 1st  array: ");
    for( i=0;i<r1;i++)
    {
        for( j=0;j<c1;j++)
        {
        scanf("%d",&x[i][j]);
        }
    }
  printf("\n Enter a Elements of 2nd  array: ");
    for( i=0;i<r2;i++)
    {
        for( j=0;j<c2;j++)
        {
        scanf("%d",&y[i][j]);
        }
    } 
    //Intializing the elements of array to 0
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            z[i][j]=0;
        }
        
    }
printf("\n Multiplication of two array : \n ");
    for( i=0;i<r1;i++)
    { 
        for( j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
               z[i][j]+=x[i][k]*y[k][j] ;
            }
    }
}
      for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
        printf("%d\t",z[i][j]);
        }
        printf("\n");
    }
}
else 
   {
    printf("Enter a correct input");
    }
}
