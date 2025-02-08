#include<stdio.h>
int main()
{
    //C porgram to sort given array in ascending order
    // int n,i,j,tmp;
    // printf("Enter a number of elements in array : ");
    // scanf("%d",&n);
    // int a[n];
    // for ( i = 0; i <n ; i++)
    // {
    //     printf("\n Enter a elemnts of array ");
    //     scanf("%d",&a[i]);
    // }
    // for ( i = 0; i <n ; i++)
    // {
    //     for(j=i+1;j<n;j++)
    //     {
    //         if(a[j]<a[i])
    //         {
    //             tmp=a[i];
    //             a[i]=a[j];
    //             a[j]=tmp;
    //         }
    //     }
    // }
    // printf("\n Elements of an array : ");
    // for ( i = 0; i <n ; i++)
    // {
    //    printf("%d\t",a[i]);
    // }

//C program to insert an element at given index
int n,i,j,x,y;
    printf("Enter a number of elements in array : ");
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i <n ; i++)
    {
        printf("\n Enter a elemnts of array ");
        scanf("%d",&a[i]);
    }
    printf("\n Elements of an array : ");
    for ( i = 0; i <n ; i++)
       printf("%d\t",a[i]);
    printf("\nEnter the new elemnet to be inserted : ");
    scanf("%d",&x);
    printf("\n Enetr a position ehrer element to be inserted ");
    scanf("%d",&y);
   n=n+1;
    for(i=n-1;i>y;i--)
    {
    a[i]=a[i-1];
    }
    a[y]=x;
    printf("\n Elements of an array after inserting : ");
    for ( i = 0; i <n ; i++)
       printf("%d\t",a[i]);
}