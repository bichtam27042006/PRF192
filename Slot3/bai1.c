//1. khai bao và khởi tạo gia trị cho 2 số a,b nguyên 
//2. Khai bao bien kq 
//Hãy in kết quả: +,-, *,/ của a,b 
#include<stdio.h> 
int main ()
{
 	int a = 7; 
	int b = 2;
	int kq;
	float kqf;
	kq = a + b; 
 	printf("%d+%d= %d\n",a,b, kq);
 	kq = a - b;
	printf ("%d-%d= %d\n",a,b, kq);
	kq = a * b;
	printf ("%d*%d= %d\n",a,b,kq );
	kqf =(float) a/b;
	printf ("%d/%d= %.2f\n",a,b,kqf);
	
	
	
}