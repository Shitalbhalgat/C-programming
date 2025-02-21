#include <stdio.h>
enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };  
// int main()  
// {  
//     enum week day;  
//     day = Friday;  
// 	int var=Monday;
//     printf("Day: %d",day+1);  
// 	printf("\nvar : %d",var);
// 	if(var==Monday)
// 	printf("\nMonday");
//       
// } 
//  
// // C Program to Demonstrate the Functioning of Enumerators with an example of Gender 
// 
int main() 
{ 
	// Defining enum Gender 
	enum Gender { Male, Female,other}; 

	// Creating Gender type variable 
	enum Gender g=Male;
    printf("%d",g); 
	switch (g) { 
	case Male: 
		printf("\nGender is Male"); 
		break; 
	case Female: 
		printf("\nGender is Female"); 
		break; 
	default: 
		printf("\nValue can be Male or Female"); 
	} 
	return 0; 
}
