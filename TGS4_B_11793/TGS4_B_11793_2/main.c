#include <stdio.h>
#include <stdlib.h>
typedef char string[1];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x;
	printf("Masukan karakter : ");scanf("%c",&x);
	if(x>=48&&x<=58){printf("%c adalah digit.",x);}
  	else if(x>=65&&x<=91){printf("%c adalah karakter.",x);}
	else{printf("%c adalah karakter lainnya.",x);}

	return 0;
}
