#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
Kimberly Tse 
Programming for Engineers
ktse-assignment6.c
*/

// Creates struct of class roster.
typedef struct ClassSeat_struct { 							
   char firstName[50];
   char lastName[50];
} Class;

//Fills seats up as unfilled for each class
void SeatMakeEmpty(Class *math) { 							
   strcpy((*math).firstName, "unfilled");
   strcpy((*math).lastName,  "unfilled");
}
void EngSeatMakeEmpty(Class *eng) { 
   strcpy((*eng).firstName, "unfilled");
   strcpy((*eng).lastName,  "unfilled");
}
void SciSeatMakeEmpty(Class *sci) { 
   strcpy((*sci).firstName, "unfilled");
   strcpy((*sci).lastName,  "unfilled");
}
void HistSeatMakeEmpty(Class *hist) { 
   strcpy((*hist).firstName, "unfilled");
   strcpy((*hist).lastName,  "unfilled");
}

//If there is nothing filled in a certain seat, returns "unfilled" for each class
bool SeatIsEmpty(Class math) { 								
   return (strcmp(math.firstName, "unfilled") == 0);
}
bool EngSeatIsEmpty(Class eng) { 					
   return (strcmp(eng.firstName, "unfilled") == 0);
}
bool SciSeatIsEmpty(Class sci) { 					
   return (strcmp(sci.firstName, "unfilled") == 0);
}
bool HistSeatIsEmpty(Class hist) { 					
   return (strcmp(hist.firstName, "unfilled") == 0);
}

//After scanning user input of first and last name, prints first and last name given class to register for
void SeatPrint(Class math) { 								
   printf("%s ", math.firstName);
   printf("%s ", math.lastName);
   printf("\n");
}
void EngSeatPrint(Class eng) { 					
   printf("%s ", eng.firstName);
   printf("%s ", eng.lastName);
   printf("\n");
}
void SciSeatPrint(Class sci) { 				
   printf("%s ", sci.firstName);
   printf("%s ", sci.lastName);
   printf("\n");
}
void HistSeatPrint(Class hist) { 				
   printf("%s ", hist.firstName);
   printf("%s ", hist.lastName);
   printf("\n");
}

//Prints the seat roster numbers for each class
void SeatsMakeEmpty(Class math[], int numSeats) {
   int i;
   for (i = 0; i < numSeats; ++i) {
      SeatMakeEmpty(&math[i]);
   }
}
void EngSeatsMakeEmpty(Class eng[], int numSeats) { 
   int i;
   for (i = 0; i < numSeats; ++i) {
      EngSeatMakeEmpty(&eng[i]);
   }
}
void SciSeatsMakeEmpty(Class sci[], int numSeats) { 
   int i;
   for (i = 0; i < numSeats; ++i) {
      SciSeatMakeEmpty(&sci[i]);
   }
}
void HistSeatsMakeEmpty(Class hist[], int numSeats) {
   int i;
   for (i = 0; i < numSeats; ++i) {
      HistSeatMakeEmpty(&hist[i]);
   }
}

//Prints the number of seats given class (each class will have same number of seats)
void SeatsPrint(Class math[], int numSeats) { 	
   int i;
   for (i = 0; i < numSeats; ++i) {
      printf("%d: ", i);
      SeatPrint(math[i]);
   }
}
void EngSeatsPrint(Class eng[], int numSeats) { 
   int i;
   for (i = 0; i < numSeats; ++i) {
      printf("%d: ", i);
      SeatPrint(eng[i]);
   }
}
void SciSeatsPrint(Class sci[], int numSeats) { 
   int i;
   for (i = 0; i < numSeats; ++i) {
      printf("%d: ", i);
      SeatPrint(sci[i]);
   }
}
void HistSeatsPrint(Class hist[], int numSeats) {
   int i;
   for (i = 0; i < numSeats; ++i) {
      printf("%d: ", i);
      SeatPrint(hist[i]);
   }
}

int main(void) {
	const int NUM_SEATS = 10;	// number of seats available for each class
	char userKey; 				// user input of p, q, or r
   	int  seatNum;				// user input of seat number in constraints of NUM_SEATS
   	
   	Class math[NUM_SEATS];		// Number of seats in each class given NUM_SEATS
  	Class eng[NUM_SEATS];
  	Class sci[NUM_SEATS];
  	Class hist[NUM_SEATS];
  	
	Class currSeat;				//works with current seat given seat number and class
								//When user calls for seat number, program will focus on that seat number to fill the first/last name
	
	SeatsMakeEmpty(math, NUM_SEATS); // makes seats for all classes to be unfilled
	SeatsMakeEmpty(eng, NUM_SEATS); 
	SeatsMakeEmpty(sci, NUM_SEATS);
	SeatsMakeEmpty(hist, NUM_SEATS);
   
	int i; // determine what seat number
	int j; // determine what class
   
	while (userKey != 'q') {
    	printf("Print classes = p\nInput registration = r\nExit registration = q\n Enter command (p/r/q): ");
      	scanf(" %c", &userKey);
    	if (userKey == 'p') { 										// Print classes
    	printf("List of Classes\n 0 = Calculus II\n 1 = Programming for Engineers\n 2 = Physics II\n 3 = SMC Nature\nSelect which class to look at: ");
    	scanf("%d", &j);
    	
    	// lists the class name and the seats in that class
    	switch(j){
    		case 0:
    			printf("   Calculus II   \n"); 
				SeatsPrint(math, NUM_SEATS);
        		printf("\n");
        		break;
        	case 1:
	        	printf("   Programming for Engineers   \n");
				SeatsPrint(eng, NUM_SEATS);
	        	printf("\n");
	        	break;
			case 2:
				printf("   Physics II   \n");
				SeatsPrint(sci, NUM_SEATS);
	        	printf("\n");
	        	break;
			case 3:
				printf("   SMC Nature   \n");
				SeatsPrint(hist, NUM_SEATS);
	        	printf("\n");
				break;	
        	}
      	}
    else if (userKey == 'r') { // Reserve for classes
    	printf("\n0 = Calculus II\n1 = Programming for Engineers\n2 = Physics II\n3 = SMC Nature\n Pick what course to register for: ");
    	scanf("%d", &i);
    	
    	/*
    	NOTE: in the if/else loop, it's repeated code for each class. Refer to Calculus II class
    	*/
    	
    	switch(i){
    		case 0:
    			printf("Register for Calculus II:\n");
	  			printf("Enter seat num: ");
				scanf("%d", &seatNum); 						// user inputs a seat number
        		if (!SeatIsEmpty(math[seatNum])) {			//if the seat is already filled, program will say seat is filled.
            		printf("Seat not unfilled.\n\n");
            		break;
        		}
        		else {										//Program will ask for first and last name of student and put the name for the current seat
            		printf("Enter first name: ");
            		scanf("%s", currSeat.firstName);
            		printf("Enter last name: ");
            		scanf("%s", currSeat.lastName);
            		math[seatNum] = currSeat;
            		printf("Completed.\n\n");
            		break;
	  			}	
    		case 1:
    			printf("Register for Programming for Engineers:\n");
	  			printf("Enter seat num: ");
				scanf("%d", &seatNum);
        		if (!SeatIsEmpty(eng[seatNum])) {
            		printf("Seat not unfilled.\n\n");
            		break;
        		}
        		else {
            		printf("Enter first name: ");
            		scanf("%s", currSeat.firstName);
            		printf("Enter last name: ");
            		scanf("%s", currSeat.lastName);
            		eng[seatNum] = currSeat;
            		printf("Completed.\n\n");
            		break;
	  			}
	  		case 2:
				printf("Register for Physics II:\n");
		  		printf("Enter seat num: ");
				scanf("%d", &seatNum);
	        	if (!SeatIsEmpty(sci[seatNum])) {
	            	printf("Seat not unfilled.\n\n");
	            	break;
	        	}
	        	else {
	            	printf("Enter first name: ");
	            	scanf("%s", currSeat.firstName);
	            	printf("Enter last name: ");
	            	scanf("%s", currSeat.lastName);
	            	sci[seatNum] = currSeat;
	            	printf("Completed.\n\n");
	            	break;
		  		}
		  	case 3:	
		  		printf("Register for SMC Nature:\n");
		  		printf("Enter seat num: ");
				scanf("%d", &seatNum);
	        	if (!SeatIsEmpty(hist[seatNum])) {
	            	printf("Seat not unfilled.\n\n");
	            	break;
	        	}
	        	else {
	            	printf("Enter first name: ");
	            	scanf("%s", currSeat.firstName);
	            	printf("Enter last name: ");
	            	scanf("%s", currSeat.lastName);
	            	hist[seatNum] = currSeat;
	            	printf("Completed.\n\n");
	            	break;
		  		}
        	}
    	}
    	else if (userKey == 'q') { 						// exits programming/registering for classes
        	printf("Exiting registration.\n");
    	}
    	else { 											// if someone decides to find a loophole in the program
        	printf("No, you cannot do that.\n\n");
		}
	}
	return 0;
}
