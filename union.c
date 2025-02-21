 #include <stdio.h> 
// Creating a union 
union student { 
// Defining data members 
	int rollno; 
	char grade; 
	float marks; 
}; 

int main() 
{ 

	// Defining a union variable 
	union student s1; 

	// Assigning values to data member of union student and printing the values of data members 
	s1.rollno = 25; 
	printf( "rollno :%d ",s1.rollno); 

	s1.grade = 'C'; 
	printf( "\nGrade : %c",s1.grade); 

	s1.marks = 45; 
	printf( "\nmarks : %f",s1.marks); 

// sharing a same memory address 
     printf( "\nMemory address of rollno: %p",&s1.rollno);
	 printf( "\nMemory address of marks: %p",&s1.marks); 
	//size of union
     printf( "\nSize of a union: %d", sizeof(s1)); 
     
	return 0; 
}
