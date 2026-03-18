#include<stdio.h>
#include <string.h>
int main(){
	
	int n;
	char temp[50];
	char names[10][100]; // tối đa 10 tên, mỗi tên tối đa 99 ký tự

// INPUT
printf("INPUT\n");
	
 	scanf("%d", &n);

    getchar(); // xóa '\n' trong buffer  
	for(int i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        
        names[i][strcspn(names[i], "\n")] = '\0';  //// xóa '\n' cuối chuỗi
    }
	printf("\nOUTPUT\n");
	
	// Sắp xếp (Bubble Sort)
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {  // so sánh 
                // hoán đổi bằng strcpy
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);  //đưa names[j] lên vị trí i
                strcpy(names[j], temp);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    
	return 0;
}
