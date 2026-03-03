//Tính tiền cước Taxi (Tính km thực tế)
//Yêu cầu: Viết hàm calculate_taxi_fare(float distance).
//Logic: 1 km đầu: 15.000đ.
//oTừ km thứ 2 đến km thứ 30: 12.000đ/km.
//oTừ km thứ 31 trở đi: 10.000đ/km.
//oSử dụng if...else if...else để phân loại khoảng cách.

//distance ≤ 1
//→ Chỉ tính 15.000đ.
//
//1 < distance ≤ 30
//→ 15.000đ cho km đầu
//→ Các km còn lại tính 12.000đ/km
//
//distance > 30
//→ 15.000đ cho km đầu
//→ 29 km tiếp theo × 12.000đ*
//→ Từ km 31 trở đi × 10.000đ

#include<stdio.h>

float calculate_taxi_fare(float distance){
	float tienCuoc;
	if(distance <= 0){
		return 0;
	}
	else if(distance <= 1){
		tienCuoc = 15000;
	}
	else if(distance > 1 &&  distance <= 30){
		tienCuoc = 15000 + (distance - 1 ) * 12000 ; //Km đầu = 15.000 -> Còn lại = distance - 1 
	}
	else {
		tienCuoc = 15000 + 29 * 12000 + (distance - 30 ) * 10000; //15.000đ cho km đầu + 29 km tiếp theo + Từ km 31 
	}
	return tienCuoc;
}

int main(){
	float distance,tienCuoc;
	while (1) {
		printf("Nhap so km : ");
		scanf("%f", &distance );
		if(distance > 0){
			break;		
		}
		printf("Nhap sai roi! Nhap lai di\n");
		while (getchar() !=  '\n');  
	}
	tienCuoc = calculate_taxi_fare(distance); //lưu kết quả vào biến tienCuoc
	printf("Tong tien cuoc taxi la: %.0f VND", tienCuoc);
	return 0;
}



