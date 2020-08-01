#include <stdio.h>
#include <stdlib.h>
/*
Kimberly Tse 
Programming for Engineers
ktse-assignment2a.c
*/
int main() {
	
	float cDegree;																											// convert to celsius //
	float fDegree;																											// convert to fahrenheit //
	
	int askType;																											// asks user of what conversion
	float numDegrees;																										// user variable
	
	askType = 3;																											// This number is inputted so that the while loop would work
	
	printf("Enter 1 to convert Celsius to Fahrenheit \nEnter 2 to convert Fahrenheit to Celsius \nEnter 0 to exit\n ");		// Question to user whether to convert to celsius or fahrenheit //
	scanf("%d", &askType); 
	
	
	switch (askType) {
		case 0:																											// When you press "0," program will end.
			break;

		case 1:																											// When you press "1," conversion to fahrenheit will run
	      	printf("Enter the temperature in degrees Celsius: ");	
			scanf("%f", &numDegrees);            						
			fDegree = numDegrees * 1.8 + 32;
			printf("%f degrees Celsius is equal to %f degrees Fahrenheit \n\n", numDegrees, fDegree);
			break;
	
	   	case 2:																											//When you press "2," conversion to celsius will run
	      	printf("Enter the temperature in degrees Fahrenheit: ");
			scanf("%f", &numDegrees);
			cDegree = (numDegrees - 32) / 1.8;
			printf("%f degrees Fahrenheit is equal to %f degrees Celsius \n\n", numDegrees, cDegree);
	      	break;
	
	   	default:																										// When you press any other number than what it is called, the program will end
	      	break;
	}	

	return 0;
}

