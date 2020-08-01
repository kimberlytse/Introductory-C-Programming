#include <stdio.h>
#include <string.h>
/*
Kimberly Tse 
Programming for Engineers
ktse-assignment7.c
*/
int main(void) {
   	FILE* myFile = NULL; // File pointer
   	/***Input variables***/
   	char fName[26]; 	// first name
   	char lName[26]; 	// last name
   	int tDateM;			// month date
   	int tDateD;			// day date
   	int tDateY;			// year date
   	char sequence[50];	//sequence
	char courseNum[50]; // course number
   	int roomNum;		// room number
		/*Step 1, 2: Create new file, opening file*/
   	myFile = fopen("kimberlyTse.txt", "w");
   	
   	if(myFile == NULL){
   		printf("Cannot open file.\n");
   		return -1;
	   }
   	
		/*Step3: Inputting data*/
	//Program will ask user a series of questions, and the user input will be put in the file
   	printf("Enter your first and last name: ");
   	fscanf(stdin, "%s %s", &fName, &lName);
   	printf("Enter today's date: ");
   	fscanf(stdin, "%d/%d/%d", &tDateM, &tDateD, &tDateY);
   	printf("Type exactly the following: 1,2,3,4,5,6: ");
   	fscanf(stdin, "%s", &sequence);
   	//The user input will be printed out in the text file created
	fprintf(myFile, "Name: %s %s\n Date: %d/%d/%d \n Sequence: %s\n\n", fName, lName, tDateM, tDateD, tDateY, sequence);
	
		/*Step 4: Close file*/
	fclose(myFile);
	
   		/*Step 5: Append file*/
   	myFile = fopen("kimberlyTse.txt", "a");
   	
   		/*Step 6: Input data pt.2*/
   	/*Note: This is similar to Step 3. Refer to that step*/
	printf("Enter course number for Programming: ");
   	fscanf(stdin, "%s", &courseNum);
   	printf("Enter classroom number for Programming: ");
   	fscanf(stdin, "%d", &roomNum);
   	fprintf(myFile, " Course Number: %s\n Classroom Number: %d\n", courseNum, roomNum);
   	
	fclose(myFile);

   return 0;
}
