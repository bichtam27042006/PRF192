#include <stdio.h>

//Hàm tìm số lớn nhất trong 3 số
int maxABC(int a, int b, int c){
    int max = a;
    
    if(b > max){
        max = b;
    }
    
    if(c > max){
        max = c;
    }
    
    return max;
}
// Hàm nhập 3 số nguyên
// Hàm nhập và xử lý luôn
void nhapABC(){
    int a, b, c;

    printf("Nhap 3 so a b c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Max: %d\n", maxABC(a, b, c));
}

int main(){
	int kq = maxABC(a,b,c);
	printf("Max của %d %d %d là %d\n", m, kq );
    return 0;
}