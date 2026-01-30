// Nhap vao 2 so nguyen a,b
//Nhap vao 1 trong 5 phep toan: +,-<*,/,%
/*test case 1:
	3,5 
	+ 
3+5 = 8 
test case 2:
3,5
/
3/5 = 0.60
Test case 3:
3,5
%
3 % 5 = 3 
Test case 4:
3,0
/ 
Khoong the chia cho 0
*/

#include<stdio.h>
int main(){
	int a,b;
	float kq;
	scanf("%d,%d", &a, &b);
	char phepToan; 
	scanf(" %c", &phepToan);
	switch(phepToan){
		case '+':
			kq = a + b;
			break;
		case '-':
			kq = a - b;
			break;
		case '*':
			kq = a * b;
			break; 
		case '/':
			if(b==0){
				printf("Khong the chia cho 0");
				return 0;
			}
			else{
				kq =(float)a/b;// ep ket qua a/b theo kieu float 
				printf("%d %c %d = %.2f",a,phepToan,b,kq);// truong hop kq la so thap phan 
				return 0;
			}
			break;
		case '%':
			if(b==0){
			printf("Khong the chia cho 0");
			return 0;
			}
			else 
			kq = a % b;
			break;
		default:
			printf("Nhao sai !");
			return 0;
	}
	printf("\n%d %c %d = %.0f",a,phepToan,b,kq);// in kq la so nguyen 
}