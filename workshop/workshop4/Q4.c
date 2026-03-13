//SỐ LẦN MỖI SỐ CHẲN XUẤT HIỆN 

// Unique  : duy nhất 

// the array that are divisible by 2 --> chia hết cho 2 --> số chẳn
//For each unique identified element, calculate its frequency (total occurrences)
//(mỗi phần tử khác nhau, tính tần suất xuất hiện của nó trong mảng)
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
    int check = scanf("%d",&n);
    int a[100];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

	int found = 0; 
	
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
	
	if(check != 1 || n <= 0){
		printf("Invalid input");
		return 0; 
	}
	
// kiểm tra chẵn lẻ 
	for(int i = 0; i < n;i++){
		if(a[i] % 2 == 0){
			int unique = 1;
			
// kiểm tra xem số a[i] đã xuất hiện trước đó chưa

			for(int j = 0; j < i;j++){ 
				if(a[i] == a[j]){
					unique = 0; //nếu trùng thì trả về 0 
					break;
				}		
			}
//Nếu chưa xuất hiện trước đó.
			if(unique){

                int count = 0;
                
                for(int k=0;k<n;k++)  //Duyệt toàn bộ mảng
				{
                    if(a[k] == a[i]){
                        count++;
                    }
                }
			    printf("%d-%d\n",count,a[i]);
                found = 1;
        	}	  
		}
	}
// Nếu không tìm thấy số chẵn 	
	if(found == 0){
        printf("Not found\n");
    }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
