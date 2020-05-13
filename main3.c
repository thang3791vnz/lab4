#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	printf("Nhap so num1 = ");
	scanf("%d", &num1);
	
	printf("Nhap so num2 = ");
	scanf("%d", &num2);
	
	printf("\nBinh phuong cua 2 so la : %d", num1*num2);
	printf("\nTong cua cua 2 so la : %d", num1+num2);
	printf("\nHieu cua 2 so ka : %d", num1-num2);
	printf("\nThuong cua 2 so la : %d", num1/num2);
	getch();
}
