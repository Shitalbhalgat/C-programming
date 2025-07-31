#include<stdio.h>
int main()
{
    //Write a C program to add two array elements
    int size = 5;

    // Compile-time initialization of two arrays
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};
    int sum[5];

    for(int i = 0; i < size; i++)
     {
        sum[i] = a[i] + b[i];
    }

    printf("Sum of the two arrays:\n");
    for(int i = 0; i < size; i++) 
    {
        printf("sum[%d] = %d\n", i, sum[i]);
    }

    //  Write c program to copy  the elements of one array into another array
        int n;
            printf("Enter a number of elements in array : ");
            scanf("%d",&n);
            int arr1[n],arr2[n];
            for ( int i = 0; i <n ; i++)
            {
                printf("\n Enter a elemnts of array ");
                scanf("%d",&arr1[i]);
                arr2[i]=arr1[i]; //copy the element in another array
            }
        
            printf("\n Elements of an array : ");
            for ( int i = 0; i <n ; i++)
            {
               printf("%d\t",arr2[i]);
               printf("%p",&arr2[i]);
               printf("\n");
        
        }
    //Write C program to sort given array in ascending order
            int n,i,j,tmp;
            printf("Enter a number of elements in array : ");
            scanf("%d",&n);
            int a[n];
            for ( i = 0; i <n ; i++)
            {
                printf("\n Enter a elemnts of array ");
                scanf("%d",&a[i]);
            }
            for ( i = 0; i <n ; i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[j]<a[i])
                    {
                        tmp=a[i];
                        a[i]=a[j];
                        a[j]=tmp;
                    }
                }
            }
            printf("\n Elements of an array : ");
            for ( i = 0; i <n ; i++)
            {
            printf("%d\t",a[i]);
            }

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
            printf("\nEnter the new element to be inserted : ");
              scanf("%d",&x);
            printf("\n Enter a position where element to be inserted ");
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