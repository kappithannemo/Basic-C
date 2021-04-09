// Including headers from stdio.h file for printf fn :
#include<stdio.h>

int main(int argc, char* argv[]) {

	// Declaring local variables for loop count :
	int i=0;

	// Loop starts with value i = 1, terminates if i > 10 and 
	// 	increments value of i by 1 everytime it checks the terminating condition
	for( i = 1; i <= 10; i++ ) {
		// Printing i :
		printf("i = %d\n", i);
	}

	return 0;
}


