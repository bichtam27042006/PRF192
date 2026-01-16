//Nhap so thuc: 12.2567
//Giá trị đã nhập:12.2567 
//phần nguyên là:12 
//phần thực là: 0.2567
#include<stdio.h>
int main(){
	float bien;
	int Phannguyen;
	float Phanthuc;
	printf("Nhap so thuc: ");
    scanf("%f", &bien);
    Phannguyen = (int)bien;    
    Phanthuc = bien - Phannguyen;
    printf("Gia tri da nhap: %.4f\n",bien);
	printf("Phan nguyen la: %d\n", Phannguyen);
    printf("Phan thuc la: %.4f\n", Phanthuc);
    return 0;
}