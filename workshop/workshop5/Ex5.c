// Tìm và thay thế ký tự trong chuỗi + đếm số lần thay
//replacement character

#include <stdio.h>
#include <string.h>

int main(){
	printf("INPUT\n");
	char str[100];
	fgets(str, sizeof(str), stdin);
	
    char find, replace;
    scanf(" %c", &find); 
    scanf(" %c", &replace);
	
    str[strcspn(str, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng do fgets tạo ra
    
	printf("\nOUTPUT:\n");    
	
	int count = 0;  // đếm số lần thay thế 
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == find) {
            str[i] = replace;
            count++;
        }
    }
    printf("%d\n", count);
    printf("%s\n", str);
	return 0;
}
