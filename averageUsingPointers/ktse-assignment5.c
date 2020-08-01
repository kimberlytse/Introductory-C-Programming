#include <stdio.h>

/*
Kimberly Tse 
Programming for Engineers
ktse-assignment5.c
*/

// Function to find total and average sum.
FindAverage(int numTimes, float* totSum, float* avgSum){
   // Variable 'i' will be used in a for loop.
   int i;
   int val;
   float sum = 0;
   
   // For loop for numTimes.
   for(i = 0; i < numTimes; i++){
		printf("Enter a value: ");
		scanf("%d", &val);
		sum = sum + val;
   }
   *totSum = sum;
   *avgSum = sum / numTimes;
   }

int main(void) {
	// Number of times to ask user.
	int askUser = 8;

	float avgSum;
	float totSum;

	printf("Given eight input values, we can find the total sum and the average of the total sum...\n");
	FindAverage(askUser, &totSum, &avgSum);
	
	// Prints total and average sum
	printf("Total: %f\nAverage: %f", totSum, avgSum);

   return 0;
}
