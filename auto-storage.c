    #include <stdio.h>  
    // int main()  
    // {  
    //     auto int a; //auto  
    //     char b;  
    //     float c;   
    //     printf("%d\t %c\t %f",a,b,c); // printing initial default value of automatic variables a, b, and c.   
    //     return 0;  
    // }  

int main()  
{  
 int a = 10,i;   
printf("%d ",++a); //11 
{  
int a = 20;   
for (i=0;i<3;i++)   
printf("%d ",a); // 20 will be printed 3 times since it is the local value of a  
 
}  
printf("%d ",a); // 11 will be printed since the scope of a = 20 is ended.   
}  