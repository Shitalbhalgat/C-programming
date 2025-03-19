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
        //    while(!feof(fptr))
        //    {
        //         ch=fgetc(fptr);
        //         printf("%c",ch);
        //     }
        
//           rewind(fptr);
//            while(fgets(str,30,fptr)!=NULL)
//            printf("%s",str);
//              
//            rewind(fptr);
        while(!feof(fptr))
             {
               fscanf(fptr,"%s",str);
               printf("\n%s",str);
            }
// 
// 
 } 
    fclose(fptr);
    return 0;
}