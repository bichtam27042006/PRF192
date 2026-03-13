
// Bai 5: hàm hoán đổi 2 so nguyên
// hoan doi 3 so nguyên : gtri so 1<> so 3, so2 <> so 1 ,so 3<> so2 
#include <stdio.h>

//Hàm mảng đảo ngược  
	void swap(int *a,int *b){
		int temp;
		temp = *a;
		*a = *b;
		 *b = temp;
	}

// hoán đổi 3 số theo yêu cầu
void swap3(int *a, int *b, int *c){
    swap(a, c); // so1 <-> so3
    swap(b, a); // so2 <-> so1
    swap(c, b); // so3 <-> so2
}

int main(){
    int a, b, c;

    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);

    swap3(&a, &b, &c);

    printf("Hoan doi:\n %d %d %d", a, b, c);

    return 0;
}	