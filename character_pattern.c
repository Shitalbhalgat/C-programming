#include <stdio.h>

int main()
{
    /* 
    ';left half pyramid
    A 
    B B
    C C C
    D D D D
    E E E E E
    */	
   int i,j,n=5,k;
	char ch='A';
    printf("Left half pyramid pattern\n");
	for (i=0;i<n;i++) {
		for (j = 0; j <= i; j++) {
			printf("%c",ch);
		}
		printf("\n");
		ch++;
	}
    /* 
    left half pyramid
        A
        B C
        D E F
        G H I J
        K L M N O
    */	
   ch='A';
   printf("\n");
    printf("Left half pyramid pattern 2\n");
	for (i=0;i<n;i++) {
		for (j = 0; j <= i; j++) {
			printf("%c",ch);
            ch++;
		}
		printf("\n");
		
	}
    /*
    Inverted left half pyramid pattern
        A A A A A
        B B B B
        C C C
        D D
        E
    */
    ch='A';
    printf("");
    printf("Inverted left half pyramid pattern\n");
   for(i=1; i<=n; i++){
    for(j=i; j<=n; j++){
    printf("%c",ch);
     }
     ch++;
   printf("\n");
 }
 /*
    Right half pyramid pattern
         A
        BB
       CCC
      DDDD
     EEEEE
    */
    ch='A';
    printf("\n");
    printf("Right half pyramid pattern \n");
   for(i = 1;i <= n;i++) {
         for(k = 1;k<=(n-i);k++) 
         printf(" ");
      for(j =1;j<=i;j++) {
        printf("%c",ch);
      }
      ch++;
      printf("\n");
   }
   printf("\n");
/* Inverted Right half pyramid pattern
   AAAAA
    BBBB
     CCC
      DD
       E
*/
ch='A';
printf("Inverted Right half pyramid pattern \n");
   for(i=n;i>0;i--) {
       for(k = 1;k<=(n - i);k++) 
         printf(" ");
      for(j =1;j<=i;j++) {
         printf("%c",ch);
      }
      ch++;
      printf("\n");
   }
   printf("\n");
   /*
     pyramid pattern
         A
        B B
       C C C
      D D D D
     E E E E E
    */
    ch='A';
    printf( "pyramid pattern \n");
   for(i = 1;i <= n;i++) {
         for(k = 1;k<=(n-i);k++) 
         printf(  " ");
      for(j =1;j<=i;j++) {
      printf("%c",ch);
      }
      ch++;
      printf("\n");
   }
}

	

