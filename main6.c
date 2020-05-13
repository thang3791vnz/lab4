#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Toan;
	int Ly;
	int Hoa;
	int Tong;
	int Trungbinh;
	printf("Nhap vao diem mon Toan : ");
	scanf("%d", &Toan);
	
	printf("Nhap vao diem mon Ly : ");
	scanf("%d", &Ly);
	
	printf("Nhap vap diem mon Hoa : ");
	scanf("%d", &Hoa);
	Tong = Toan + Ly + Hoa;
	Trungbinh = (Toan + Ly + Hoa)/3;
	
	printf("Tong diem 3 mon la : %d\n", Tong);
	
	printf("Trung Binh 3 mon la : %d", Trungbinh);
	
	return 0;
}
