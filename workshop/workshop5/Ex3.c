#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int isPalindrome(char s[]){
	int len = strlen(s);
	for(int i = 0; i < len/2; i++){
		if(s[i] != s[len - i - 1]){
			return 0;
		}
	}
	return 1;
}

int main(){
	printf("INPUT\n");
	char str[100];
	gets(str); // fgets(str, 100, stdin);is not Palindrome.
	
	printf("\nOUTPUT\n");
	if(isPalindrome(str)){
		printf("Yes");
	}else {
		printf("No");
	}
	return 0;
}