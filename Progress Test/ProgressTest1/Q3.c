#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	int n;
	scanf("%d", &n);
	
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if (n <= 0) {
        printf("Error: n must be greater than 0.");
    } 
    else {
   double S = 0;
   double factorial = 1;
   for (int i = 1; i <= n; i++) {
   	 factorial *= i;          // tính i!
        S += 1.0 / factorial;    // cộng 1/i!
    }
     printf("%.3lf", S);
 }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
