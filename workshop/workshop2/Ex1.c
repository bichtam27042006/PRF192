// Nhập vào n>0 
#include<stdio.h>
int main(){
/*	float n; 
	printf("Nhap vao n: ");
	int kq scanf("%f", &n);
	while (n<=0||n>1000 ){
		printf("Nhap lai n: ");
		scanf("%f", &n);
	}
	printf ("Can bac 2 la : %.2f",sqrt(n)); 
	return 0;
	*/
	//cách 2 
	float n;
	printf ("Nhap vao n: ");
	while (scanf("%f", &n)!=1 || n<=0 || n>1000){
		printf ("Nhap lai n: ");
		fflush(stdin);//c1 : xoa vung đệp tránh nhập chữ 	
		//while(getchar()!='n';//c2 	
	}
	printf ("Can bac 2 la : %.2f",sqrt(n)); 
	return 0;
}