#include<stdio.h>

int main()
{
     int a[2][2],i,j,r,c;
    printf("Enter a Elements of array: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    //size of matrix is
    printf("Size of array is : %d",sizeof(a));
    printf("\nElements of an array is : \n");
      for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        //printf("a["<<i<<"]["<<j<<"] ="<<a[i][j]);
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

} 
//Addition of 2D matrix
// printf("Enter the no of rows:");
// scanf("%d",&r);
// printf("\n Enter the no of coloums :");
// scanf("%d",&c);
// int x[r][c],y[r][c],z[r][c];
// printf("\n Enter a Elements of 1st  array: ");
//     for( i=0;i<r;i++)
//     {
//         for( j=0;j<c;j++)
//         {
//         scanf("%d",&x[i][j]);
//         }
//     }
//   printf("\n Enter a Elements of 2nd  array: ");
//     for( i=0;i<r;i++)
//     {
//         for( j=0;j<c;j++)
//         {
//         scanf("%d",&y[i][j]);
//         }
//     } 
//   printf("\n Addition of two array : \n ");
//     for( i=0;i<r;i++)
//     {
//         for( j=0;j<c;j++)
//         {
//         printf("%d\t",x[i][j]+y[i][j]) ;
//         }
//         printf("\n");
//     } 
// }
