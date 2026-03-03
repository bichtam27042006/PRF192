//Bài 6: Game đoán số (Sử dụng break/continue)
//Yêu cầu: Viết hàm play_game().
//Logic: Máy sinh một số ngẫu nhiên. Người dùng có tối đa 7 lần đoán.
//Nếu đoán đúng: dùng break để thắng cuộc.
//Nếu nhập số ngoài phạm vi (ví dụ âm): dùng continue để yêu cầu nhập lại mà không mất lượt.

#include<stdio.h>
#include <stdlib.h>// tạo số ngẫu nhiên 
#include <time.h>  //mỗi lần chạy chương trình sẽ sinh số khác nhau.

void play_game(){
	int random, soDoan;
	int soLuot = 0;
	
	srand(time(NULL));  //tạo số random mỗi lần chạy 
	random = rand() % 100 + 1; //%100 chạy từ 0->100 ,%100 +1 chạy từ 1->100 
	
	printf("GAME DOAN SO (1 - 100)      \n");
	
	while (soLuot < 7){       //Khi count = 7 thì dừng
	printf("     Luot %d \n", soLuot + 1);
	printf("Nhap so ban doan: ");
	scanf("%d", &soDoan);
	
	if (soDoan < 0) {
	    printf("So khong hop le! Nhap lai.\n");
	    continue;   // Bỏ qua lượt này, KHÔNG tăng lượt
    }
	soLuot++;  // Chỉ tăng khi nhập hợp lệ
	
	if(random == soDoan){
		printf("Chuc mung ban doan dung ! Phan thuong la 100 trieu");
		break;   // Thoát vòng lặp khi thắng
	}
	else if (soDoan < random) {
        printf("So lon hon.\n");
    }
    else {
        printf("So nho hon.\n");
    }
}
 if (soLuot == 7 && soDoan != random) { 
        printf("Ban da het luot choi! So dung la: %d\n", random);
    }
}
int main(){
 	play_game();
	return 0;
}
