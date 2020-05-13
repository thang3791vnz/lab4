#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c;
	int f;
	printf("\nNhap vao do C muon quy doi : ");
	scanf("%d", c);
	f = 9/5*c+32;
	printf("% do C = % do F", c, f);
	return 0;
}
