#include <stdio.h>
#include <string.h>

/*
Kimberly Tse 
Programming for Engineers
ktse-assignment4.c
*/

int main(void) {
	char userStr[100]; // Input string
	int i;
	int numChars;
   	
	printf("Print individual characters of string in reverse order. \n");
	printf("------------------------------------------------------\n");
   	
	// Prompt user for string input
	printf("Input the string: ");
	scanf("%s", userStr);
   
	//gets number of characters of given userStr
	numChars = strlen(userStr);
   	printf("\n");
   	
   	// Print string backwards
   	printf("The characters of the string in reverse are:");
	for(i = numChars; i >= 0; i--){
		printf("%c ", userStr[i]);
	}
	
	// Prints number of characters with and without null character
	printf("\n");
	printf("Size of string with null character: %d \n", numChars + 1);
	printf("Size of string without null character: %d", numChars);

   return 0;
}
