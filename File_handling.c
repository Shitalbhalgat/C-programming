#include <stdio.h>
#include <stdlib.h>
int main()
{
   
    FILE* fptr;

    // creating file using fopen() access mode "w"
    fptr = fopen("abc.txt", "w");

    // checking if the file is created
    if (fptr == NULL) {
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
