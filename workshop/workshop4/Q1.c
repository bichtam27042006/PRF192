// enter two “float” numbers: ‘a’ and ‘b’
//printf Result = 3can(a^2+b^2)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	float a,b;
	int check = scanf("%f %f", &a, &b);
	float result;
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(check != 2 ){ // nếu 2 số nhập vào sai kiểu 
		printf("Invalid input");
	}else {
		result = pow(a *a + b * b, 1.0/3);
		printf("%.2f",result);
	}
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
