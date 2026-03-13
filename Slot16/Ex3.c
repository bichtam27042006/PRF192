#include <stdio.h>
#include <string.h>

void reverseString(char str[]){
    int n = strlen(str);

    for(int i = n-1; i >= 0; i--){
        printf("%c", str[i]);
    }
}

int main(){
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);

    return 0;
}