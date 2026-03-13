#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Hàm kiểm tra nguyên âm
int isVowel(char c){
    c = tolower(c);   // đổi về chữ thường
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;
}

// Hàm đếm số nguyên âm trong chuỗi
int countVowel(char *str){
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++){
        if(isVowel(str[i]))
            count++;
    }

    return count;
}

int main(){
    char *str;

    str = (char*)malloc(100 * sizeof(char));   // cấp phát bộ nhớ

    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);

    printf("So nguyen am: %d", countVowel(str));

    free(str);   // giải phóng bộ nhớ
    return 0;
}