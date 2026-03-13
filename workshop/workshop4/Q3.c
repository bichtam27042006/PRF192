//enter an array of ‘n’ integer numbers
//print the even numbers sorted 
// ‘\n’ between any two printed numbers.
//Nếu n ≤ 0 → Invalid input
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int check = scanf("%d", &n);
	int a[100];
	for(int i = 0; i < n; i++){
		 scanf("%d", &a[i]);
	}
	int temp;
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  	if(check != 1 || n <= 0 ){
  		printf("Invalid input");
  		return 0;
	}else{ 
	// xắp xếp giảm dần 
		for(int i = 0; i < n;i++){
			for(int j = i+1; j < n;j++){
				if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				}
			}
		}
	// in số chẳn 
		for(int i = 0; i < n;i++){
			if(a[i] % 2 == 0 ){
				printf("%d\n", a[i]);
			}
		}
	
	}
  
  	printf("\n");
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
