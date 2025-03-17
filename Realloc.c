#include<stdio.h>
#include<stdlib.h>
// 
// int main()
// {
//     int *ptr,*ptr1;
//     ptr= (int *)malloc(sizeof(int));        // allocating memory using malloc
//     if (ptr == NULL) 
//     {
//         printf("Memory allocation failed\n");
//         exit(0);
//    } 
//    printf("Address of previously allocated Memory : %p",ptr);
// 
//     ptr[0] = 5;
//  
//    printf("\n element of ptr %d ",*(ptr));
// 
//     ptr1 = (int *)realloc(ptr, 3 * sizeof(int));    // reallocating memory using realloc
//     if (ptr1==NULL)
//      {
//             printf("Memory allocation failed\n");
//             exit(0);
//          } 
//     printf("\nAddress of newly allocated Memory: %p ",ptr1);
//     ptr1[1] = 7;
//     ptr1[2] = 9;
//     
//     for(int x = 0; x < 3; x++)
//     {
//           printf("\n %d", ptr1[x]);
//           //printf("\n %d",*(ptr+x));
//     }
//     free(ptr1);
//     return 0;
// }





int main() 
{
  int n, i, *ptr,*ptr1;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  ptr = (int*)malloc(n * sizeof(int));
 
  // if memory cannot be allocated
  if(ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }
  printf("\nAddress of previously allocated Memory : %p",ptr);
  printf("\nEnter elements: ");
  for(i = 0; i < n; ++i)
   {
    scanf("%d", &ptr[i]);
    
  }
  printf("\nElements are :");
  for(i = 0; i < n; ++i)
   {
    printf("%d \t", ptr[i]);
 }


  printf("\nEnter a updated value of n : ");
  scanf("%d", &n);

  ptr1 = (int *)realloc(ptr, n * sizeof(int));    // reallocating memory using realloc
    if (ptr1==NULL)
     {
            printf("Memory allocation failed\n");
            exit(0);
     } 
printf("\nAddress of newly allocated Memory : %p",ptr1);
printf("\nEnter  a new elements: ");
  for(i = 0; i < n; ++i)
   {
    scanf("%d", &ptr1[i]);
    
  }
  printf("\nNew elements are :");
  for(i = 0; i < n; ++i)
   {
    printf("%d \t", ptr1[i]);
    
  }

  
  // deallocating the memory
  free(ptr1);

  return 0;
}
