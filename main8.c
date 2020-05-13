#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 15;
	printf("Kich thuoc cua kieu int : %d byte\nSo nguyen %d\n", sizeof(int), a);
	
	float b = 3.456;
	printf("\nKich thuoc cua kieu float %d byte\nSo thuc kieu float : %f\n", sizeof(float));
	
	double c = 4.56789;
	printf("\nKich thuoc cua kieu double %d byte\nSo thuc kieu double : %lf\n", sizeof(double));
	printf("\nKich thuoc kieu char : %d byte\n", sizeof(char));
	printf("\nKich thuoc kieu long int : %d byte\n", sizeof(long int));
	printf("\nKich thuoc kieu long double : %d byte\n", sizeof(long double));
	return 0;
}
