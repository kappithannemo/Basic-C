// Including headers from stdio.h file for printf fn :
#include<stdio.h>

// Defining some macros :
#define STRING "Hello World\n"
#define N 3

int main(int argc, char* argv[]) {

	// Declaring local variables for loop count :
	int i=0;

	// Printing STRING N times :
	for( i = 0; i < N; i++ ) {
		printf("%s", STRING);
	}

	return 0;
}


