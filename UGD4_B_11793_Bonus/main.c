#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
int main(int argc, char *argv[]) {
	int tanggal_11793, bulan_11793, tahun_11793, tahun2_11793, carihari_11793, bulan2_11793, hari_11793;
	
	printf("Masukan tanggal lahir anda (DD MM YYYYY) ");scanf("%d %d %d",&tanggal_11793,&bulan_11793,&tahun_11793);
	printf("====================================================\n");
	
	if(bulan_11793<0||tanggal_11793<0||tahun_11793<0){
		printf("		Nilai minus");
	}
	else if(bulan_11793==2&&tanggal_11793>29){
		printf("  Tidak ada tanggal lebih dari 29 di bulan febuari");
	}
	else if(tahun_11793>2023){
		printf("	   Saat ini masih tahun 2023");
	}
	else if(bulan_11793>12){
		printf("	Tidak ada bulan lebih dari 12");
	}
	else if(tanggal_11793>31){
		printf("	Tidak ada tanggal lebih dari 31");
	}
	else{
		if(bulan_11793<=2){
			tahun2_11793=tahun_11793-1;
			bulan2_11793=0;
		}
		else{
			tahun2_11793=tahun_11793;
			bulan2_11793=(4*bulan_11793+23)/10;
		}
			carihari_11793=365*tahun_11793+tanggal_11793+31*(bulan_11793-1)-bulan2_11793+(tahun_11793/4)-((3*((tahun2_11793/1000)+1)/4));
			hari_11793=carihari_11793%7;
			
			printf("	      Kamu lahir pada hari ");
			
		switch(hari_11793){
			case 0:
				printf("Minggu");
				break;
			case 1:
				printf("Senin");
				break;
			case 2:
				printf("Selasa");
				break;
			case 3:
				printf("Rabu");
				break;
			case 4:
				printf("Kamis");
				break;
			case 5:
				printf("Jumat");
				break;
			case 6:
				printf("Sabtu");
				break;
			default:
				printf("Invalid");
				break;
		}
		
			printf("\n	Pada Tanggal %d Bulan ",tanggal_11793);
			
		switch(bulan_11793){
			case 1:
				printf("Januari");
				break;
			case 2:
				printf("Febuari");
				break;
			case 3:
				printf("Maret");
				break;
			case 4:
				printf("April");
				break;
			case 5:
				printf("Mei");
				break;
			case 6:
				printf("Juni");
				break;
			case 7:
				printf("Juli");
				break;
			case 8:
				printf("Agustus");
				break;
			case 9:
				printf("September");
				break;
			case 10:
				printf("Oktober");
				break;
			case 11:
				printf("November");
				break;
			case 12:
				printf("December");
				break;
			default:
				printf("invalid");
				break;		
		}
		
			printf(" Tahun %d",tahun_11793);
			
			printf("\n	    Saat ini kamu berumur %d tahun",2023-tahun_11793);
			
	}
	printf("\n====================================================");
	
	return 0;
}
