//Bài 5: Tìm số nguyên tố trong khoảng [a, b]
//Yêu cầu: Viết hàm is_prime(int n).
//Logic: Sử dụng vòng lặp for để kiểm tra số nguyên tố. 
//Trong hàm main, dùng một vòng lặp khác để duyệt từ a đến b, nếu gặp số chẵn (trừ số 2) thì dùng continue để bỏ qua cho nhanh.

#include<stdio.h>
// Hàm kiểm tra số nguyên tố
int is_prime(int n){
	if (n < 2){  //Nếu n < 2 → không phải số nguyên tố
    	return 0;
	}
	for (int i = 2; i <= n/2; i++) { //Không có số nào (ngoài 1 và chính nó) lớn hơn n/2 mà có thể chia hết cho n.
    	if (n % i == 0)  // chia cho 1 số ngoài 1 và chính nó 
            return 0;
    }
    return 1;
}
// Tìm số nguyên tố trong khoảng [a, b]
int main(){
	int a,b;
	printf("Nhap a , b : ");
 	while ( scanf("%d %d", &a, &b) != 2 || a < 0 || b < 0) {     //yêu cầu nhập 2 số != 2 để không đọc đủ 2 s
		printf("Nhap sai dinh dang! Vui long nhap lai: ");
        while (getchar() != '\n'); // Xóa bộ nhớ đệm
        continue;
    }
	printf("Cac so nguyen to trong khoang [%d, %d] la: ", a, b);
 	for(int i = a; i <= b; i++){
 		if(i % 2 == 0 && i != 2)
    	continue;

		if(is_prime(i))  //Nếu điều kiện đúng --> i là số nguyên tố
		printf(" %d", i);
	} 
	return 0;       
}

