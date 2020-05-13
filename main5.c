#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int top;
	int bottom;
	int height;
	int area;
	printf("Nhap vap day lon cua hinh thang : ");
	scanf("%d", &bottom);
	
	printf("Nhap vao day nho cua hinh thang : ");
	scanf("%d", &top);
	
	printf("Nhap vao chieu cao cua hinh thang : ");
	scanf("%d", &height);
	
	area = (top + bottom)*height/2;
	printf("Dien tich hinh thang la : %d", area);
	getch();
}
