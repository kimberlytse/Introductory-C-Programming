#include <stdio.h>
#include <stdlib.h>
/*
Kimberly Tse 
Programming for Engineers
ktse-assignment3.c
*/

float ToCel(float numDegrees){																//function to convert fahrenheit to celsius
	float cDegree;
	cDegree = (numDegrees - 32) / 1.8;
	printf("Degrees in Celsius: %f", cDegree);
	return;
}
float ToFah(float numDegrees){																//function to convert celsius to fahrenheit
	float fDegree;
	fDegree = numDegrees * 1.8 + 32;
	printf("Degrees in Fahrenheit: %f", fDegree);
	return 0;
}
float ToCent(float numDistance){															//function to convert inches to centimeters
	float centimeters;
	centimeters = numDistance * 2.54;
	printf("Distance in centimeters: %f", centimeters);
	return 0;
}
float ToInches(float numDistance){															//function to convert centimeters to inches
	float inches;
	inches = numDistance / 2.54;
	printf("Distance in inches: %f", inches);
	return 0;
}

int main() {
	float numDegrees;																		//var to hold user input for degrees
	float numDistance;																		//var to hold user input for distance
	int askType;																			// asks user of what conversion and stores that number to correlate to choice

	while(askType !=5 ){
		printf("Select from the menu below to convert temperature or linear measurements: \n\n"); //Asks user what they want
		printf("1 Convert Fahrenheit to Celsius \n2 Convert Celsius to Fahrenheit \n");		
		printf("3 Convert Inches to Centimeters \n4 Convert Centimeters to Inches\n");	
		printf("5 Exit the program\n");		
		printf("Enter your selection: ");	
		scanf("%d", &askType);
		switch (askType) {
		   	case 1:																			//Convert fahrenehit to celsius
		   		printf("Enter the temperature in degrees Fahrenheit: ");	
				scanf("%f", &numDegrees);
				ToCel(numDegrees);
				printf("\n\n\n");
				break;
			case 2:																			//Convert celsius to fahrenheit
		   		printf("Enter the temperature in degrees Celsius: ");	
				scanf("%f", &numDegrees);
				ToFah(numDegrees);
				printf("\n\n\n");
				break;
			case 3:																			//Convert inches to centimeters
		   		printf("Enter the distance in inches: ");	
				scanf("%f", &numDistance);
				ToCent(numDistance);
				printf("\n\n\n");
				break;
			case 4:																			//Convert centimeters to inches
		   		printf("Enter the distance in centimeters: ");	
				scanf("%f", &numDistance);
				ToInches(numDistance);
				printf("\n\n\n");
				break;
			case 5:																			//User will exit program
		   		printf("Exiting program...");	
				break;
		   	default:
		   		printf("Nope, pick from 1 to 5.\n\n\n");									//Just in case someone wants to be "that person" and puts in a different number
		      	break;
		}	
	}
	
	return 0;
}

