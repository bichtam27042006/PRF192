#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm kiểm tra nguyên âm
int isVowel(char c){
    c = tolower(c);   // đổi về chữ thường
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;
}

// Hàm đếm số nguyên âm trong chuỗi
int countVowel(char str[]){
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++){
        if(isVowel(str[i]))
            count++;
    }

int main(){
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("So nguyen am: %d", countVowel(str));

    return 0;
}