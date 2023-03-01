#include <stdio.h>


int main() {
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

int j;
for (j = 0; j < 4; j++) {
  printf("%d\n", myNumbers2[j]);
}



int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
printf("%d\n", matrix[0][2]);  // Outputs 2 
matrix[0][0] = 9;
printf("%d\n", matrix[0][0]);  // Now outputs 9 instead of 1 

int a, b;
for (a = 0; a < 2; a++) {
  for (b = 0; b < 3; b++) {
    printf("%d\n", matrix[a][b]);
  }
} 

  return 0;
} 