#include <stdio.h>
#include <string.h>

int main(void) {
   char userStr[20] = "1234567890123456789"; // Input string
   int i;
   int numChars;
   
   // Prompt user for string input
   printf("Enter string (<20 chars): ");
   scanf("%s", userStr);
   
   //gets number of characters of given userStr
   numChars = strlen(userStr);
   
   // Print string
   printf("\n%s\n", userStr);
   
   // Look for '@'
   for (i = 0; userStr[i] != numChars; ++i) {
      if (userStr[i] == '@') {
         printf("Found '@'.\n");
      }
   }
   //gets last character of given userStr
	printf("%c", userStr[numChars - 1]);
	
   return 0;
}

//Ch 7.3.1
/*
#include <stdio.h>

CoordTransform(int xVal, int yVal, int* xValNew, int* yValNew){
   *xValNew = (xVal + 1)*2;
   *yValNew = (yVal + 1)*2;
   }

int main(void) {
   int xValNew;
   int yValNew;

   CoordTransform(3, 4, &xValNew, &yValNew);
   printf("(3, 4) becomes (%d, %d)\n", xValNew, yValNew);

   return 0;
}
*/


//How pointers work
/*
#include <stdio.h>

int main() {
   int usrInt;        // User defined int value
   int* myPtr = NULL; // Pointer to an integer

   printf("Enter any number: ");
   scanf("%d", &usrInt);

   printf("Wrote number into variable usrInt\n");  
   printf("usrInt: %d.\n", usrInt);
   printf("usrInt's memory address: %p.\n", (void*) &usrInt);
   printf("That address is stored into ");
   printf("   pointer variable myPtr\n");

   myPtr = &usrInt;

   printf("myPtr: %p.\n", (void*) myPtr);
   printf("Content of what myPtr points to:");
   printf("%d.\n", *myPtr);

   return 0;
}
*/

//Ch 7.1.2
/*
#include <stdio.h>

// Define void UpdateTimeWindow(...)

void UpdateTimeWindow(int* timeStart, int* timeEnd, int offsetAmount){
   *timeStart = *timeStart + offsetAmount;
   *timeEnd = *timeEnd + offsetAmount;
   }

int main(void) {
   int timeStart;
   int timeEnd;
   int offsetAmount;

   timeStart = 3;
   timeEnd = 7;
   offsetAmount = 2;
   printf("timeStart = %d, timeEnd = %d\n", timeStart, timeEnd);

   UpdateTimeWindow(&timeStart, &timeEnd, offsetAmount);
   printf("timeStart = %d, timeEnd = %d\n", timeStart, timeEnd);

   return 0;
}
*/

//Ch 6.5.2
/*
#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int userValues[NUM_VALS];
   int i;
   int matchValue;
   int numMatches = -99; // Assign numMatches with 0 before your for loop

   userValues[0] = 2;
   userValues[1] = 2;
   userValues[2] = 1;
   userValues[3] = 2;

   matchValue = 2;

   numMatches = 0;
   matchValue = 0;
	for(i = 0; i < NUM_VALS; i++){
    	if(userValues[i] ==  userValues[abs(i - 1)] || userValues[i] == matchValue){
         numMatches = numMatches + 1;
         matchValue = userValues[i];
         }
      }

   printf("matchValue: %d, numMatches: %d\n", matchValue, numMatches);

   return 0;
}
*/



//Ch 5.8.2
/*
#include <stdio.h>

int main(void) {
   int numRows = 2;
   int numCols = 3;

   // Note: You'll need to declare more variables

   int i;
   int j;
   
   char k = 'A';
   
   
   	for(i = 1; i <= numRows; i++){
		for(j = 1; j <= numCols; j++){
			printf("%d%c ", i,k);
			k++;
         }
         k = 'A';
      }

   printf("\n");

   return 0;
}
*/

//Ch 5.4.2
/*#include <stdio.h>

int main(void) {
   int userInput;

   do {
      scanf("Enter a number (<100): %d \n", &userInput);
   } while ( userInput < 100);

   printf("Your number < 100 is: %d\n", userInput);

   return 0;
}
*/
