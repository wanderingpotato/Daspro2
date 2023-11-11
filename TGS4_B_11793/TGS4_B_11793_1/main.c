#include <stdio.h>
#include <stdlib.h>
typedef char string[50];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hour_11793, minutes_11793, second_11793;
	int hour24_11793, minutes24_11793, second24_11793;
	string time_11793;
	printf("Masukan waktu dalam bentuk HH:MM:SS AM/PM: ");fflush(stdin);scanf("%d:%d:%d %s",&hour_11793,&minutes_11793,&second_11793,&time_11793);
	if(hour_11793>12||minutes_11793>60||second_11793>60){
		printf("ERROR");
	}else{
		if(strcmpi(time_11793,"AM")==0){
		if(hour_11793==12){
			hour_11793=00;
		}
		printf("Waktu setelah dikonversi adalah [%.2d:%.2d:%.2d]",hour_11793,minutes_11793,second_11793);
	}else if(strcmpi(time_11793,"PM")==0){
		switch(hour_11793){
			case 1:
				hour_11793=13;
				break;
			case 2:
				hour_11793=14;
				break;
			case 3:
				hour_11793=15;
				break;
			case 4:
				hour_11793=16;
				break;
			case 5:
				hour_11793=17;
				break;
			case 6:
				hour_11793=18;
				break;
			case 7:
				hour_11793=19;
				break;
			case 8:
				hour_11793=20;
				break;
			case 9:
				hour_11793=21;
				break;
			case 10:
				hour_11793=22;
				break;
			case 11:
				hour_11793=23;
				break;
			case 12:
				hour_11793=00;
				break;
			default:
				printf("ERROR\n");
				break;
		}
		printf("Waktu setelah dikonversi adalah [%.2d:%.2d:%.2d]",hour_11793,minutes_11793,second_11793);
	}
	}
	
	
	
	return 0;
}
