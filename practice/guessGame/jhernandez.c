#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 10

static void my_function(void);
int main() {
    srand(time(NULL));
    
    int randNum, guess;
	int counter=1; 
	int reRun=1;
    
    puts("-----WELCOME TO THE GUESSING GAME-----");
    puts("Ok, I have picked a number between 1-10. You have 5 guesses.");
    puts(" ");
    
	do {
    	randNum = 1 + rand() % MAX;
    for(counter = 1;counter < 6; counter++){
        printf("What's your %d guess? ", counter);
        scanf("%d", &guess);
    	if (guess < 1 || guess > MAX) {
        	printf("Please enter a valid guess. ");
        	}
    	if (guess != randNum) {
        	if (guess < randNum) {
            	printf("That's too low.\n");
        		}
        	if (guess > randNum) {
            	printf("That's too high.\n");
        		}
    		} 
    	if( guess == randNum) {
    		printf("That's it! The number was %d. You win!\n", randNum);
    		break;
    		}
    	} 
    	if (guess != randNum) {
        	printf("Sorry, you lose! The number was %d\n", randNum);
    	}
    	
    printf("Would you like to play again? 1 = yes, 0 = no : ");
    scanf("%d", &reRun);
		
		} while(reRun == 1);
	}    

