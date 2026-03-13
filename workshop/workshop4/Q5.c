
// VIẾT PT 2 MẢNG 2 CHIỀU 
// TÍNH TỔNG TỪNG HÀNG NGANG 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Define matrix dimensions
#define ROWS 2
#define COLS 3

/**
 * TODO: Implement the function to calculate the sum of each row.
 * @param matrix: Input 2D integer array.
 * @param result: Output 1D int array to store the sum of each row.
 */
 
 // HÀM TÍNH CODE TỪNG HÀNG 
 
void findRowSum(int matrix[ROWS][COLS], int result[ROWS]) {
	for(int i = 0; i < ROWS; i++){

        result[i] = 0;

        for(int j = 0; j < COLS; j++){
            result[i] += matrix[i][j];
        }
    }
    
}
/**
 * TODO: Implement the function to display the result array.
 */
 
 // HÀM IN KẾT QUẢ 
 
void displayResults(int result[ROWS]) {
	for(int i = 0; i < ROWS; i++){
        printf("%d\n", result[i]);
    }
}

int main() {
    system("cls");
    printf("INPUT:\n");	
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    
	int matrix[ROWS][COLS];
    int result[ROWS];
	int check; 
	
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            check = scanf("%d", &matrix[i][j]);
        }
    }
    
   	 printf("OUTPUT:\n");
    // OUTPUT: Hiển thị kết quả ra màn hình
    if(check != 1){
    	printf("Invalid input");
    	return 0;
	}
    findRowSum(matrix, result);
    displayResults(result);

    
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}