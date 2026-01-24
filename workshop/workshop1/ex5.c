//Tính cước taxi chuyên nghiệp Viết chương trình tính tiền taxi với quy định:
//Giá mở cửa: 12.000đ cho 0.5km đầu tiên.
//Từ 0.5km đến 30km: 15.000đ/km.
//Từ km thứ 31 trở đi: 12.000đ/km.
//Nếu thời gian chờ trên 5 phút, mỗi phút tiếp theo tính 1.000đ/phút.
#include<stdio.h>
int main(){
	float km;
	int t; 
	float tien = 0;
	printf("Nhap so km da di: ");
	int kq = scanf("%f", &km );
	if (kq!= 1 || km<0) {
        printf("Nhap sai!\n");
        return 0;
    }
    else {
	printf(" Nhap thoi gian cho: ");
	kq =scanf(" %d", &t);
	if (kq!= 1 || t<0) {
        printf("Nhap sai!\n");
        return 0;
    }
	if(km<=0.5) {
		tien = 12000;
	}
	else {
		if(0.5<km && km<=30)
			tien = 12000 + (km-0.5)*15000;
		else 
			tien = 12000 + 29.5*15000 + (km-30)*12000;
	} 
	if(t>5)
		tien = tien + (t- 5)*1000;
	printf("Tong tien taxi phai tra: %.f\n ",tien);
	 printf("\n|  So km   | So phut cho |  Tien   |\n");
    printf("|   %-6.1f |      %-7d| %-7.0f |\n", km, t, tien);
}
	return 0;
	
}