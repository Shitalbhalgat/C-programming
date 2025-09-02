#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   
    FILE* fptr;

    // creating file using fopen() access mode "w"
    fptr = fopen("QWER.txt", "w");

    if (fptr == NULL) 
    {
        printf("Error in file opening");
        exit(0);
    }
    else 
    {
        printf("The file is created Successfully.");
        fputc('F',fptr);
        fputs("\nfile handling",fptr);
        fprintf(fptr,"\n%d",1);
    } 
    fclose(fptr);
        

    return 0;
}
