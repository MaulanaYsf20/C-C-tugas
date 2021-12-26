
// program menghitung luas Belah Ketupat dan volume Kubus
// menggunakan bahasa c

/* Nama   : Maulana Yusuf
   prodi  : Sistem Informasi
   Matkul : Algoritma dan pemrograman 
   Nim    : 1001210004
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
int     pilihan, pilih;
float   luas, volume, sisi, d1, d2; 
	
//menu
mulai :
	printf("\n\n========* Menu *========\n\n");
	printf(" 1. LUAS BELAH KETUPAT \n");
	printf(" 2. VOLUME KUBUS \n");
	printf(" 3. KELUAR \n\n");
	printf("========* Menu *========\n\n");
	printf(" Masukan Pilihan Anda : ");
	scanf("%d", &pilihan);
	switch(pilihan)
	{
	//luas belah ketupat
	case 1 :
		printf("\n\n========* luas belah ketupat *========\n\n");
		printf("Masukan diagonal ke-1 : ");
		scanf ("%f", &d1);
		printf("Masukan diagonal ke-2 : ");
		scanf ("%f", &d2);
		luas =(0.5*(d1*d2));
		printf("\n");
		printf("Luas Belah Ketupat =  %f", luas);
		printf("\n\n===============***================\n\n");
		printf(" [1] Kembali ke Menu \n");
		printf(" [2] keluar\n\n");
		printf(" Masukan pilihan Anda : ");
		scanf ("%d", &pilih);
		if(pilih == 1)
		goto mulai;
		else exit;
		return 0;
		break;
	
	//volume kubus
	case 2 :
		printf("\n\n========* volume Kubus *========\n\n");
		printf("Masukan Sisi kubus : ");
		scanf ("%f", &sisi);
		luas =(sisi*sisi*sisi);
		printf("\n");
		printf("Volume Kubus =  %f", luas);
		printf("\n\n===============***================\n\n");
		printf(" [1] Kembali ke Menu \n");
		printf(" [2] keluar\n\n");
		printf(" Masukan pilihan Anda : ");
		scanf ("%d", &pilih);
		if(pilih == 1)
		goto mulai;
		else exit;
		return 0;
		break;
	}
} 

