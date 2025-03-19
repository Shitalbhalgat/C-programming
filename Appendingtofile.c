#include <stdio.h>
#include<stdlib.h>
int main() 
{
    FILE *fptr;
    char ch,str[30];
    fptr = fopen("QWER.txt","r");
    if(fptr==NULL)
    {
        printf("file doesn't exits");
        exit(1);
    }
    else {
        while(!feof(fptr))
           {
                ch=fgetc(fptr);
                printf("%c",ch);
            }
    }
    fptr = fopen("QWER.txt", "a");

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