#include <stdio.h>

//single line comment

/*
multi line
comment
*/

int main() {
  printf("Hello World!\n");  //\n creates a new line
  printf("I am learning C.\n");
  printf("Hello World!\nI am learning C.\nAnd it is awesome!\n");
  
  printf("this creates a \t horizontal tab\n");
  printf("this inserts a \\ backslash character\n");
  printf("this inserts a \" double quote character\n");

// Declare a variable
int myNum;
// Assign a value to the variable
myNum = 15;

int myNum2 = 15; 
printf("%d\n", myNum2); //%d or %i for int
float myFloatNum = 5.99;   // Floating point number
printf("%f\n", myFloatNum);  //f for float
char myLetter = 'D';       // Character
printf("%c\n", myLetter);  // c for character

printf("My favorite number is: %d\n", myNum2); 
printf("My number is %d and my letter is %c\n", myNum2, myLetter); 

myNum2 = 10; //overwrite a variable value

int x = 5;
int y = 6;
int sum = x + y;
printf("%d\n", sum); 

int a = 5, b = 6, c = 50;
printf("%d\n", a + b + c); 

int a2, b2, c2;
a2 = b2 = c2 = 50;
printf("%d\n", a2 + b2 + c2); 

/*
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names
*/


int myNumbers[] = {25, 50, 75, 100}; //array
printf("%d\n", myNumbers[0]);
myNumbers[0] = 33;

int i;
for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);
}

// Declare an array of four integers:
int myNumbers2[4];

// Add elements
myNumbers2[0] = 25;
myNumbers2[1] = 50;
myNumbers2[2] = 75;
myNumbers2[3] = 100;

  return 0;
} 