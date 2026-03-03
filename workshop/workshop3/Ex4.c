//Bài 4: Menu điều khiển máy tính bỏ túi
//Yêu cầu: Viết hàm show_menu() và hàm processor().
//Logic: Sử dụng vòng lặp do...while để giữ chương trình chạy liên tục.
//Sử dụng switch...case để chọn phép tính (+, -, *, /).
//Dùng break để thoát chương trình khi chọn 0.

#include<stdio.h>

// hàm hiển thi menu 
void show_menu(){
	printf("\n     Menu dieu khien may tinh     \n");
	printf("1. Phep cong\n");
	printf("2. Phep tru\n");
	printf("3. Phep nhan\n");
	printf("4. Phep chia\n");
	printf("5. Thoat\n");
	printf("Chon phep toan:");
}
// Hàm xử lý phép tính
void processor(){
	int choice;// lựa chọn menu (1,2,3,4,5)
	float a,b,kq;
	do{
		show_menu();
		if(scanf("%d", &choice) != 1){ //nếu nhập acb -> Không đọc được số nguyên -> scanf trả về 0
		printf("Nhap sai ! Nhap lai lua chon: ");
		while(getchar() != '\n');
		}
	
		if (choice >= 1 && choice <= 4) {
            printf("Nhap a b: ");
            if(scanf("%f %f", &a, &b) != 2){
            	printf("Nhap sai! Nhap lai: \n");
				while(getchar() != '\n');
				continue;
		    }
		}
		switch(choice){ //Kiểm tra giá trị của choice
			case 1: {	
			kq = a + b;
			printf("Ket qua cua %.2f + %.2f la %.2f\n", a, b, kq);
				break;
			}
			case 2:{
				kq = a - b;
				printf("Ket qua cua %.2f - %.2f la %.2f", a, b, kq);
				break;
			}
			case 3:{
				kq = a * b;
				printf("Ket qua cua %.2f * %.2f la %.2f", a, b, kq);
				break;
			}
			case 4:{
				if(b == 0){
					printf("Khong the chia cho 0 !\n");
				}else{
				kq = a / b;
				printf("Ket qua cua %.2f / %.2f la %.2f", a, b, kq);
				break;
				}
			}
			case 5:{
				printf("Thoat chuong trinh !\n");
				return;
			}
		default : printf("Lua chon khong hop le !");
		}
	}while(choice != 5 ); //Nếu choice khác 5 → quay lại menu
	
}
int main(){
	processor();
	return 0;
}


