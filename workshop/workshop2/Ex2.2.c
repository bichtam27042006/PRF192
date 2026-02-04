#include<stdio.h>
#include<math.h>
int main(){
	float n;
	int count = 0 ; 
	while (1){
	printf("Nhap vao n: ");
	while(scanf("%f", &n)!=1 || n<=0){
		printf("\nNhap lai n: ");
		fflush(stdin);
	}
		printf ("Can bac 2 la : %.2f\n",sqrt(n)); 
		count++;
		if (count==5)
		{
			break; 
		}
	}
	printf("\nDa xong ,xuat sac ");
	return 0;
}