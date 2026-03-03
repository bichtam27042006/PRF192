// năm nhuận là năm chia hết cho 4 nhưng không chia hết cho 100
// 400 cũng là năm nhuận chia hết cho 100 

#include<stdio.h>

// kiểm tra năm nhuận 
int is_leap_year(int year){ 
	if( year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("Nam %d la nam nhuan\n", year);
		return 1; // đúng điều kiện (return 1) -> là năm nhuận 
	}
	else 
	{
	printf("Nam %d khong phai la nam nhuan\n", year);
	return 0; // sai điều kiện (return 0) -> k phải năm nhuận 
	}
}

//Ham kiểm tra thang 
void get_days_in_month(int month, int year){

	switch (month) //Nếu nhập = 1 -> month = 1 → chạy case 1
	{
		// Các tháng 31 ngày
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:{ 
			printf("Thang %d co 31 ngay",month);
			break;
		}
		// Các tháng 30 ngày
		case 4: case 6: case 9: case 11:{
			printf("Thang %d co 30 ngay",month);
			break;
		}
		case 2:{
			if(is_leap_year(year)){
				printf("Thang %d nam %d co 29 ngay",month,year);
			}
			else 
				printf("Thang %d nam %d co 28 ngay",month,year);
			break;
		}
 		default : printf("Thang khong hop le!");  
	}
}

int main(){
	int month,year;
   // Nhập tháng
    while (1) { //Lặp vô hạn (1) :Điều kiện luôn đúng
        printf("Nhap thang: ");

        if (scanf("%d", &month) == 1 && month >= 1 && month <= 12)
            break; //dừng vòng lập 

        printf("Thang khong hop le! Nhap lai.\n");
        while (getchar() != '\n');  //1 lần nhấn Enter, nó tạo ra ký tự đặc biệt là \n  -> dọn bộ nhớ
    }

    // Nhập năm
    while (1) {    
        printf("Nhap nam: ");

        if (scanf("%d", &year) == 1 && year > 0)
            break;

        printf("Nam khong hop le! Nhap lai:\n");
        while (getchar() != '\n');  
    }
	get_days_in_month(month, year);
	return 0;
}
