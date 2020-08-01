#include <stdio.h>
#include <string.h>
/*
Kimberly Tse 
Programming for Engineers
ktse-assignment7.c
*/
int main(void) {
   	FILE* newFile = NULL; // File pointer
   	newFile = fopen("kimberlyTse.txt", "w");
   	
   	if(newFile == NULL){
   		printf("Cannot open file.\n");
   		return -1;
	}
   	
		/*Step3: Inputting data*/
	fprintf(newFile,"Kimberly Tse\n");
	fprintf(newFile,"12/3/2018\n");
	fprintf(newFile,"1,2,3,4,5,6\n");
	
		/*Step 4: Close file*/
	fclose(newFile);
	
   		/*Step 5: Append file*/
   	newFile = fopen("kimberlyTse.txt", "a");
   	
   		/*Step 6: Input data pt.2*/
	fprintf(newFile,"EG 1302\n");
	fprintf(newFile,"Room 101 Richter\n");
   	
	fclose(newFile);

   return 0;
}
