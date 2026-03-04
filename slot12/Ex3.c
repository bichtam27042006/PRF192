//Hàm in mã ASCII của số n
void printASCII_AtoZ(){
    char kiTu;
    for(ch = 'A'; kiTu <= 'Z'; kiTu++){ //'A' có mã ASCII là 65 ,'Z' có mã ASCII là 90
        printf("Character: %c  ASCII: %d\n", kiTu, kiTu); //%c → in ký tự - %d → in mã ASCII
    }
}
int main(){
    int n;
    int a, b, c;
	printf("\nASCII from A to Z:\n");
    printASCII_AtoZ();
    return 0;
}
