#include <stdio.h>
#include<stdlib.h>
// int main() {
//     FILE *fptr;
//     fptr = fopen("abc1.txt","w");
//     if(fptr==NULL){
//         printf("file doesn't exits");
//         exit(1);
//     }
//     else {
//         
//         fputc('F',fptr);
//         fputs("\nfile handling",fptr);
//         fprintf(fptr,"\n%d",1);
//     } 
//     fclose(fptr);
//     return 0;
// }
// 
// int main() {
//     FILE *fptr;
//     char ch,str[30];
//     fptr = fopen("abc1.txt","r");
//     if(fptr==NULL){
//         printf("file doesn't exits");
//         exit(1);
//     }
//     else {
//            while(!feof(fptr))
//            {
//                 ch=fgetc(fptr);
//                 printf("%c",ch);
//                  
//            }
//           rewind(fptr);
//            while(fgets(str,30,fptr)!=NULL)
//            printf("%s",str);
//              
//            rewind(fptr);
//         while(!feof(fptr))
//              {
//                fscanf(fptr,"%s",str);
//                printf("\n%s",str);
//             }
// 
// 
//     } 
//     fclose(fptr);
//     return 0;
// }

int main() {
    char i;
    FILE *fptr;
    fptr = fopen("abc1.txt","w");
    if(fptr==NULL){
        printf("file doesn't exits");
        exit(1);
    }
    else {
          fputc('f',fptr);
        // printf(" %c",i);

       fputs("filehandling1",fptr);
       fprintf(fptr,"%d",2);
        fseek(fptr,1,SEEK_CUR);
                fprintf(fptr,"%d",4);


        //  i=ftell(fptr);
        // printf(" %d",i);
     } 
    fclose(fptr);
    return 0;
}