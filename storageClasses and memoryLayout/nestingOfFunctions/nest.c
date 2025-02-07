// C program of nested function 
// with the help of gcc extension 
#include <stdio.h> 
int main(void) 
{ 
	auto int view(); // declare function with auto keyword 
	view(); // calling function 
	printf("Main\n"); 

	int view() 
	{ 
<<<<<<< HEAD
		printf("View\n")
		
=======
		printf("View\n"); 
>>>>>>> refs/remotes/origin/main
		return 1; 
	} 

	printf("HELLO"); 
	return 0; 
} 

