#include <stdio.h>
#include <stdlib.h>
/*
Kimberly Tse 
Programming for Engineers
ktse.c
*/
int main() {
	
	float cDegree;											// variable for celsius //
	float fDegree;											// variable for fahrenheit //
	
	printf("Enter the temperature in degrees Celsius: ");	// Question of celsius //
	scanf("%f", &cDegree);            						// Asks for celsius from user //
	
	fDegree = cDegree * 1.8 + 32;
	
	printf("The temperature in degrees Fahrenheit is: ");	// Prints the conversion from fahrenheit to celsius //
	printf("%f\n", fDegree);
	
	return 0;
}
