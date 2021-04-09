// Including headers from stdio.h for printf fn :
#include <stdio.h>

// Declaring sample_fn 's prototype :
void sample_fn(char* string);

int main(int argc, char* argv[]) {

	// Calling sample_fn :
	sample_fn("Hello World\n");

	return 0;
}

// Defining sample_fn :
void sample_fn(char* string) {

	// Printing string :
	printf("%s", string);

	return;
}
