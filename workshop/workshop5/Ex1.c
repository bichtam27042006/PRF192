#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
	printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    count = strlen(str);
	printf("\nOUTPUT\n"); 
    printf(" %d\n", count);

    return 0;
}