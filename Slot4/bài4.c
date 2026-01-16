#include <stdio.h>

int main() {
    int a, b;
    char phepToan;
    float ketQua;
    printf("Nhap a, b: ");
    scanf("%d,%d", &a, &b);
    printf("Nhap phep toan: ");
    scanf(" %c", &phepToan);   
	 if (b == 0) {
	 printf("Khong the chia cho 0");
	} else {
	 ketQua = (float)a / b;
	printf("Ket qua: %d/%d = %.2f", a, b, ketQua);
    }
    return 0;
}
