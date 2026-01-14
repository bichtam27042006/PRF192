// Khai bao kieu ki tu ten kt, khởi gán giá trị cho biến này 
//in ra : gí trị của biến : 
// giá trị thập phân, giá trị hex, giá trị octal 
// kích thước kiểu dữ liệu của biến kt 
#include <stdio.h>

int main() {
	char kt = 'A';
     printf("%-15s |%-15s |%-15s |%-15s |%-15s |%-15s\n","Ten Bien","Gia Tri","Dec","Hex","Octal","Size");
	printf ("%-15s |%-15c |%-15d |%-15x |%-15o |%-15u ","kt",kt,kt,kt,kt,sizeof(kt));
    return 0;
}
    

	