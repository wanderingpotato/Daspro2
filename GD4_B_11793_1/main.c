#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y;
	printf("Masukan tahun kabisat : ");scanf("%d",&y);
	((y%4==0 && y%100!=0)|| y%400==0)? printf("Tahun %d adalah tahun kabisat\n",y) : printf("Tahun %d bukan tahun kabisat\n",y);
	return 0;
}
