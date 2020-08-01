#include <stdio.h>

void SwapArrayEnds(int array[], int size){
   int i;
   int end;
   end = size;
   
   for(i = size; i > 0; --i){
      array[i] = array[i - 1];
      }
   }

int main(void) {
   const int SORT_ARR_SIZE = 4;
   int sortArray[SORT_ARR_SIZE];
   int i;

   sortArray[0] = 10;
   sortArray[1] = 20;
   sortArray[2] = 30;
   sortArray[3] = 40;

   SwapArrayEnds(sortArray, SORT_ARR_SIZE);

   for (i = 0; i < SORT_ARR_SIZE; ++i) {
      printf("%d ", sortArray[i]);
   }
   printf("\n");

   return 0;
}

/*
#include <stdio.h>

int main(void) {
   const int SCORES_SIZE = 4;
   int oldScores[SCORES_SIZE];
   int newScores[SCORES_SIZE];
   int i;

   oldScores[0] = 10;
   oldScores[1] = 20;
   oldScores[2] = 30;
   oldScores[3] = 40;

	for(i = 0; i < SCORES_SIZE; ++i){
		if(i!=(SCORES_SIZE-1)){
			newScores[i] = oldScores[i+1];
		}
		else{
			newScores[i] = oldScores[0]
		}
	}
	
	
	for (i = 0; i < SCORES_SIZE; ++i) {
		printf("%d ", newScores[i]);
   }
   printf("\n");

   return 0;
}
*/


/*
#include <stdio.h>

int main(void) {
   const int SCORES_SIZE = 4;
   int lowerScores[SCORES_SIZE];
   int i;

   lowerScores[0] = 5;
   lowerScores[1] = 0;
   lowerScores[2] = 2;
   lowerScores[3] = -3;

	for(i = 0; i<SCORES_SIZE; ++i){
		
		if(lowerScores[i] < 0 || lowerScores[i] == 0){
			lowerScores[i] = 0;
		}
		else{
			lowerScores[i]=lowerScores[i] - 1;
		}
	}

   for (i = 0; i < SCORES_SIZE; ++i) {
      printf("%d ", lowerScores[i]);
   }
   printf("\n");

   return 0;
}
*/
