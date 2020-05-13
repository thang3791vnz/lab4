#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float bankinh;
	float PI = 3.14;
	float chieucao;
	float chieurong;
	float canh;
	printf("Nhap vao ban kinh hinh tron : ");
	scanf("%f", &bankinh);
	if(bankinh <= 0) {
		printf("Nhap vao bankinh > 0");
	} else { 
		printf("Chu vi duong tron ban kinh %0.2f = %0.2f\n", bankinh, 2 * PI * bankinh);
		printf("Dien tich duong tron ban kinh %0.2f = %0.2f", bankinh, PI * bankinh * bankinh);
	}
	printf("\nNhap vao chieu cao cua hinh chu nhat : ");
	scanf("%f", &chieucao);
	
	printf("Nhap vao chieu rong cua hinh chu nhat : ");
	scanf("%f", &chieurong);
	if(chieucao > 0 && chieurong > 0) {
		float c = ( chieucao + chieurong) * 2;
		float a = chieucao * chieurong;
		printf("Chu vi hinh chu nhat = %0.2f\n", c);
		printf("Dien tich hinh chu nhat = %0.2f\n", a);
		} else {
			printf("Nhap canh > 0");
		}
		printf("Nhap vao canh hinh vuong : ");
		scanf("%f", &canh);
		if(canh <= 0) {
			printf("Nhap vao canh > 0");
		} else {
			printf("\nChu vi hinh vuong co canh %f cm = %f cm", canh, 4 * canh);
			printf("\nDien tich hinh vuong co canh %f cm = %f m2", canh, canh * canh);
		}
			getch();
	}
