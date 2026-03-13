#include <stdio.h>

int main(){
    int a[100];
    int *p;
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d",&n);

    // nh?p m?ng
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    p = a; // con tr? tr? vào m?ng

    printf("Mang dao nguoc: ");
    for(int i=n-1;i>=0;i--){
        printf("%d ",*(p+i));
    }

    return 0;
}