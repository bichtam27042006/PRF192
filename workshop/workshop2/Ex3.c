//nhap n nguyen 1<= n <=10
// in s? t? 1 d?n n 

#include<stdio.h>
#include<math.h>
int main(){
	int n; 
	int count = 1 ; 
	printf("Nhap n: ");	
	while(scanf("%d", &n)!=1 || n<1 || n>10){
		printf("\nNhap lai n: ");
		fflush(stdin);
	}
	while(count<=n){
	printf("%d \n",count);
	count++;
	}
	count=1;
	while(count<=10){
	printf("%d * %d = %d\n",n,count,n*count);
	count++;
	}
	return 0;
}