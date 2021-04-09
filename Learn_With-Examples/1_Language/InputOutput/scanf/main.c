// Including headers from stdio.h for printf & scanf fn :
#include <stdio.h>

int main(int argc, char* argv[]) {

	// Declaring local variable to capture input :
	char ch;

	// Notifying user that we are ready capture a number :
	printf("Enter a number : ");

	// Storing user's entry in 'ch' variable :
	scanf("%c", &ch);

	printf("You Entered : %c\n", ch);

	return 0;
}
