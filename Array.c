#include<stdio.h>
int main()
{
     int n;
    printf("Enter a number of elements in array : ");
    scanf("%d",&n);
    int arr1[n];
    for ( int i = 0; i <n ; i++)
    {
        printf("\n Enter a elemnts of array ");
        scanf("%d",&arr1[i]);
    }
    printf("\n Elements of an array : ");
    for ( int i = 0; i <n ; i++)
    {
       printf("%d\t",arr1[i]);
    }
 }
//Write cpp program to copy  the elements of one array into another array
// int n;
//     printf("Enter a number of elements in array : ");
//     scanf("%d",&n);
//     int arr1[n],arr2[n];
//     for ( int i = 0; i <n ; i++)
//     {
//         printf("\n Enter a elemnts of array ");
//         scanf("%d",&arr1[i]);
//         arr2[i]=arr1[i]; //copy the element in another array
//     }
// 
//     printf("\n Elements of an array : ");
//     for ( int i = 0; i <n ; i++)
//     {
//        printf("%d\t",arr2[i]);
//        printf("%p",&arr2[i]);
//        printf("\n");
// 
// }
// }