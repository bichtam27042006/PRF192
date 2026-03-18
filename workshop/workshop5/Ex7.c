#include<stdio.h>
#include <string.h>
int main(){
printf("INPUT\n");
	
	char str[200];
    int digits = 0, letters = 0, others = 0;
    fgets(str, sizeof(str), stdin);
printf("\nOUTPUT\n");    
    // duyệt từng ký tự
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        } 
        else if((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z')) {
            letters++;
        }
        else if(str[i] != '\n') { // bỏ qua ký tự xuống dòng
            others++;
        }
    }

    // in kết quả
    printf("%d\n", digits);
    printf("%d\n", letters);
    printf("%d\n", others);
    
	return 0;
}
