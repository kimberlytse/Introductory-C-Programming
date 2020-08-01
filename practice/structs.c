





/*
#include <stdio.h>
#include <string.h>

typedef struct PizzaInfo_struct {
   char pizzaName[30];
   int caloriesPerSlice;
} PizzaInfo;

int main(void) {

   PizzaInfo pizzasInStore[2];

   strcpy(pizzasInStore[0].pizzaName, "Barbecue");
   strcpy(pizzasInStore[1].pizzaName, "Ham and Cheese");

   pizzasInStore[0].caloriesPerSlice = 350; 
   pizzasInStore[1].caloriesPerSlice = 300;

   printf("A %s pizza contains %d calories\n", pizzasInStore[0].pizzaName, pizzasInStore[0].caloriesPerSlice);
   printf("A %s pizza contains %d calories\n", pizzasInStore[1].pizzaName, pizzasInStore[1].caloriesPerSlice);

   return 0;
}
*/

/*#include <stdio.h>
#include <string.h>

typedef struct SandwichIngredients_struct {
   char sandwichName[30];
   char ingredients[70];
} SandwichIngredients;

int main(void) {



   strcpy(availableSandwiches[0].sandwichName, "Chicken and Bacon");
   strcpy(availableSandwiches[0].ingredients, "Crispy chicken, onions, lettuce, bacon, mayonnaise");
   strcpy(availableSandwiches[1].sandwichName, "Chicken breast");
   strcpy(availableSandwiches[1].ingredients, "Grilled chicken, lettuce, tomato");
   strcpy(availableSandwiches[2].sandwichName, "Chicken with peppers");
   strcpy(availableSandwiches[2].ingredients, "Grilled chicken, red and green peppers, barbacue sauce");

   printf("%s: %s\n", availableSandwiches[0].sandwichName, availableSandwiches[0].ingredients);
   printf("%s: %s\n", availableSandwiches[1].sandwichName, availableSandwiches[1].ingredients);
   printf("%s: %s\n", availableSandwiches[2].sandwichName, availableSandwiches[2].ingredients);

   return 0;
}
*/


/*#include <stdio.h>

typedef struct TimeHrMin_struct {
   int hours;
   int minutes;
} TimeHrMin;

TimeHrMin SetTime(int hoursVal, int minutesVal){
   TimeHrMin student;
   student.hours = hoursVal;
   student.minutes = minutesVal;
	return student;
   } 

int main(void) {
   TimeHrMin studentLateness;
   int hours;
   int minutes;
	
   scanf("%d %d", &hours, &minutes);
   studentLateness = SetTime(hours, minutes);
   printf("The student is %d hours and %d minutes late.\n", studentLateness.hours, studentLateness.minutes);

   return 0;
}

*/


/*#include <stdio.h>

typedef struct TimeDecadesYears_struct {
   int decades;
   int years;
} TimeDecadesYears;

TimeDecadesYears ConvertToDecadesAndYears(int totalYears) {
   TimeDecadesYears tempVal;

   tempVal.decades = totalYears / 10;
   tempVal.years = tempVal.decades % 10; 

}

int main(void) {
   TimeDecadesYears elapsedYears;
   int totalYears;

   scanf("%d", &totalYears);
   elapsedYears = ConvertToDecadesAndYears(totalYears);
   printf("%d decades and %d years\n", elapsedYears.decades, elapsedYears.years);

   return 0;
}
*/
