// rate → tiền lương cho 1 giờ làm
//Nếu làm <= 40h -> Lương = hours × rate
//Nếu làm > 40h -> Lương = 40 × rate + (hours - 40) × rate × 1.5

#include<stdio.h>
float calculate_salary(float hours, float rate){
	float salary;
	if(hours <= 40){
		salary = hours * rate; 
	}
	else {
		salary = 40 * rate + (hours - 40) + rate * 1.5;
	}
	return salary; 
}

int main(){
	float hours,rate,salary;	
	printf("Nhap gio lam : ");
	while(scanf("%f", &hours) != 1 || hours < 0){
		printf("Nhap sai ! Nhap lai : ");
		while (getchar() !=  '\n');
	}
	
	printf("Nhap luong trong 1 gio : ");
	while(scanf("%f", &rate) != 1 || rate < 0){
		printf("Nhap sai ! Nhap lai: ");
		while (getchar() !=  '\n');
	}
	salary = calculate_salary(hours,rate);
	printf("Tong tien luong : %.3f", salary);

	return 0;
}
