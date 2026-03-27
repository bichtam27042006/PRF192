#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "products.bin"

typedef struct {
    int id;
    char name[50];
    float price;
    int quantity;
} Product;

// Xóa buffer
void clearBuffer() {
    while (getchar() != '\n');
}

// ghi thông tin sản phẩm 
void ghiSanPham() {
    FILE *f = fopen(FILE_NAME, "wb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return;
    }

    int n;
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);
    clearBuffer();

    Product p;

    for (int i = 0; i < n; i++) {
        printf("\nSan pham %d:\n", i + 1);

        printf("Ma: ");
        scanf("%d", &p.id);
        clearBuffer();

        printf("Ten: ");
        fgets(p.name, sizeof(p.name), stdin);
        p.name[strcspn(p.name, "\n")] = 0;

        printf("Gia: ");
        scanf("%f", &p.price);
        clearBuffer();

        printf("So luong: ");
        scanf("%d", &p.quantity);
        clearBuffer();

        fwrite(&p, sizeof(Product), 1, f);
    }

    fclose(f);
    printf("=> Da ghi file thanh cong !\n");
}

// thêm sản phẩm 
void themSanPham() {
    FILE *f = fopen(FILE_NAME, "ab");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return;
    }

    int n;
    printf("Nhap so san pham can them: ");
    scanf("%d", &n);
    clearBuffer();

    Product p;

    for (int i = 0; i < n; i++) {
        printf("\nSan pham %d:\n", i + 1);

        printf("Ma: ");
        scanf("%d", &p.id);
        clearBuffer();

        printf("Ten: ");
        fgets(p.name, sizeof(p.name), stdin);
        p.name[strcspn(p.name, "\n")] = 0;

        printf("Gia: ");
        scanf("%f", &p.price);
        clearBuffer();

        printf("So luong: ");
        scanf("%d", &p.quantity);
        clearBuffer();

        fwrite(&p, sizeof(Product), 1, f);
    }

    fclose(f);
    printf("=> Them thanh cong!\n");
}

// đọc sản phẩm 
void docSanPham() {
    FILE *f = fopen(FILE_NAME, "rb");
    if (f == NULL) {
        printf("Loi mo file!\n");
        return;
    }

    Product p;

    printf("\n-----------------------------------------\n");
    printf("Ma    Ten              Gia     So luong\n");
    printf("-----------------------------------------\n");

    while (fread(&p, sizeof(Product), 1, f)) {
        printf("%-5d %-16s %-8.2f %-5d\n",
               p.id, p.name, p.price, p.quantity);
    }

    printf("-----------------------------------------\n");

    fclose(f);
}

// Sửa sản phẩm 
void suaSanPham() {
    FILE *f = fopen(FILE_NAME, "rb+");
    if (f == NULL) {
        printf("Khong tim thay file!\n");
        return;
    }

    int id, found = 0;
    Product p;

    printf("Nhap ma can sua: ");
    scanf("%d", &id);
    clearBuffer();

    while (fread(&p, sizeof(Product), 1, f)) {
        if (p.id == id) {
            found = 1;

            printf("Tim thay san pham!\n");
			clearBuffer();
			printf("Nhap moi: \n");  
            printf("Ten : ");
            fgets(p.name, sizeof(p.name), stdin);
            p.name[strcspn(p.name, "\n")] = 0;

            printf("Gia moi: ");
            scanf("%f", &p.price);
            clearBuffer();

            printf("So luong : ");
            scanf("%d", &p.quantity);
            clearBuffer();

            fseek(f, -sizeof(Product), SEEK_CUR);
            fwrite(&p, sizeof(Product), 1, f);

            printf("=> Sua thanh cong!\n");
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay san pham!\n");
    }

    fclose(f);
}


int main() {
    int choice;

    do {
        printf("\n-- He thong xu ly san pham --\n");
        printf("1. Ghi san pham\n");
        printf("2. Them san pham\n");
        printf("3. Doc san pham\n");
        printf("4. Sua san pham\n");
        printf("5. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);
        clearBuffer();

        switch (choice) {
            case 1: ghiSanPham(); break;
            case 2: themSanPham(); break;
            case 3: docSanPham(); break;
            case 4: suaSanPham(); break;
            case 5: printf("Thoat chuong trinh...\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }

    } while (choice != 5);

    return 0;
}