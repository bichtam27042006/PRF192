#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("baitap1.txt", "w");
    int number = 2026;


    // Kiểm tra xem file có mở thành công không
    if (fp == NULL) {
        printf("Error!");
        return 0;
    }

   	int n;
   	printf("Nhap vao so n: ");
   	scanf("%d", &n);
   	fprintf(fp, " Gia tri cua n: %d",n);
   	
// Đọc file 
 	
 	fp = fopen("baitap1.txt", "r");
 	if (fp == NULL) {
        printf("Error!");
        return 0;
    }
    char s;
    do{
    	s = getc(fp); // đọc từng ký tự 1 trên file 
    	printf("%c", s);
	}
	while(s!=EOF);
	fclose(fp);
  return(0);
}
