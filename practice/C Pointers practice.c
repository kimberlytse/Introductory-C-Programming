#include <stdio.h>
#include <string.h>

void GetUserInfo(int* userAge, char userName[]) {
   printf("Enter your age: \n");
   scanf("%d", userAge);
   printf("Enter your name: \n");
   scanf("%s", userName);
}

int main(void) {
   int userAge;
   char userName[30];

   GetUserInfo(&userAge, userName);

   printf("%s is %d years old.\n", userName, userAge);

   return 0;
}


/*
#include <stdio.h>
int main()
{
   int num = 10;
   printf("Value of variable num is: %d", num);
   printf("\nAddress of variable num is: %p", &num);  //&num calls for memory place
   return 0;
   
}
*/
/*
#include <stdio.h>
int main()
{
    int var =10;
    int *p;
    p= &var;

    printf ( "Address of var is: %p", &var); //address
    printf ( "\nAddress of var is: %p", p); //address

    printf ( "\nValue of var is: %d", var); //10
    printf ( "\nValue of var is: %d", *p); //10
    printf ( "\nValue of var is: %d", *( &var)); //10

    // Note I have used %p for p's value as it represents an address
    printf( "\nValue of pointer p is: %p", p); //address
    printf ( "\nAddress of pointer p is: %p", &p);

    return 0;
}
*/
