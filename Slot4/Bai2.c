//Khai báo 3 biến ngày,tháng,năm,
//nhap ngay/thang/nam:12/1/2025 
// 12/01/2025 
#include<stdio.h>
int main (){
 	int ngay , thang, nam; 
    scanf ("%d/%d/%d",&ngay,&thang,&nam);
 	printf("%02d/%02d/%d", ngay, thang, nam);
	
}