#include <stdio.h>

// Hàm tính tổng các ước số của n
int tongUoc(int n){
	int sum = 0;
	int i;
	for(i=1; i <= n; i++){
	if(n%i == 0 ){
	    sum = sum + i;
        }
    }

    return sum;
} 
// viet ham nhap 
int nhapInt(){
	int soInt;
	printf("Nhap so Int: ");
	while(scanf("%d", &soInt)!=1 || soInt <= 0)
{
	printf("Nhap sai! Nhap lai : ");
	fflush(stdin);
}
	return soInt;
}
int main(){

    int n;
    n = nhapInt();
    int kq = tongUoc(n);
    printf("Tong uoc cua %d la : %d\n", n, kq);
    return 0;
    
}
    
