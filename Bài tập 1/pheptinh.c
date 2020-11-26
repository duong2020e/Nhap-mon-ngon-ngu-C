#include <stdio.h>

int main(void) {
	// khai bao bien a, b kieu int
	int a; int b; 
	// khoi tao gia tri bien a,b
	a= 3; b= 5;
	// khai bao bien tong, hieu, thuong, tich, kieu int
	int tong; int hieu; int tich; int thuong;
	// khoitao gia tri bien tong, hieu, thuong, tich 
	tong= a+b; hieu= a-b; thuong= a/b; tich= a*b;
	// hien tong ra man hinh 
	printf("tong= %d\n",a+b);
	// hien hieu ra man hinh 
	printf("hieu= %d\n",a-b);
	// hien thuong ra man hinh 
	printf("thuong= %d\n",a/b);
	// hien tich ra man hinh
	printf("tich= %d\n",a*b);
	return 0;
}
