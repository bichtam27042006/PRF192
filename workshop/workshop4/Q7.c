
//VẼ HÌNH KIM TỰ THÁP BẰNG DẤU *  với n hàng (n ≥ 2).

//Vì số * ở mỗi dòng tăng thêm 2: 2*i - 1
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
	scanf("%d",&n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  if(n < 2){
        printf("Invalid input");
        return 0;
    }

    for(int i = 1; i <= n; i++){	// vòng lặp tạo từng dòng 

        for(int j = 1; j <= n-i; j++) // i=1 --> cách 5 khoảng trống(n=6)ds
            printf(" ");

        for(int j = 1; j <= 2*i-1; j++)  //2*i-1 :là số lẻ 
            printf("*");

        printf("\n");
    }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
