// Nhap 1 mảng in ra mảng đảo ngược : bài mảng tỉnh + bài con trỏ 

#include <stdio.h>

int main(){
    int a[100];
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d",&n);

    // nhập mảng
    for(int i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    // in mảng đảo ngược
    printf("Mang dao nguoc: ");
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }

    return 0;
}