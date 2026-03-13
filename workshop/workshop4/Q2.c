//d=căn [(x2−x1)^2+(y2−y1)^2]

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float x1,x2,y1,y2;
	int check = scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
	printf("\n");
	float d;
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  	if(check != 4){
  		printf("Invalid input\n");
	}else {
		d = pow((x2 - x1) * (x2 - x1) + (y2 - y1) *(y2 - y1),1.0/2);
	  	printf("%.4f\n", d);
		if(d == 0 ){
			printf("Points are coinciden\n");
		}
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
