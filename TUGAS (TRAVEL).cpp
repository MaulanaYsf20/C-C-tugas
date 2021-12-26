#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>


char* nama_paket[100] ;
char* fasilitas[100];

struct Daftar_Nama{
	char nama[100], fasilitas;
	int jumlah_total;
};

int main(){
	
    system("color B4");
    Daftar_Nama peserta[10];
    char Nama, kode_paket, kode_tambahan;
    int  jumlah_Peserta, biaya_paket, biaya_tambahan, biaya_tarif, pajak, pilihan;
    
    
	menu:
	printf("\n           ^,^ SELAMAT DATANG DI PROGRAM PEMESANAN PT. DELIMA NYALA ^,^        ");	
	printf("\n\n");	
	printf("\n                             DAFTAR RUTE PERJALANAN                            ");
    printf("\n ______________________________________________________________________________");
    printf("\n | Kode\t   Rute Perjalanan\t\t Maksimum\t Tarif per-orang      | ");
    printf("   Paket\t                \t Peserta           \t       ");
    printf("\n ______________________________________________________________________________");
    printf("\n | 01\t   yogyakarta - parangtritis  \t  7 orang\t  Rp 300.000          |");
	printf("\n");
    printf("\n | 02\t   Klaten - Gunung Bromo      \t  7 orang\t  Rp 750.000          |");
    printf("\n");
    printf("\n | 03\t   Solo - Lawang sewu         \t  7 orang\t  Rp 400.000          |");
    printf("\n ______________________________________________________________________________");
	
	printf("\n\n\n Layanan Tambahan :");
    printf("\n ______________________________________");
    printf("\n | Kode\t      Fasilitas\t   Tarif      |");
    printf("\n | Tambahan\t           \t      |");
    printf("\n ______________________________________");
    printf("\n | A\t      Penginapan   RP 600.000 |");
    printf("\n | B\t      Tes Covid    RP 150.000 |");
    printf("\n | C\t      Kuliner      RP 300.000 |");
    printf("\n ______________________________________");
    
    printf("\n\n\n    (!!! PERCAYAKAN PERJALANAN ANDA BERSAMA KAMI. FREE WIFI DAN BAGASI !!!)   \n");
    printf("\n\n ------------------------------------------------------------------------------");
    printf("\n                              INPUT PEMBAYARAN TRAVEL                       ");
    printf("\n ------------------------------------------------------------------------------");
	

// semua proses dimulai dari sini

    // proses awal input jumlah peserta
	mulai:
	printf("\n  Masukan Jumlah Peserta =  "); 
	scanf("%d", &jumlah_Peserta); fflush(stdin);
	
	// pengujian batas maksimum peserta
	if (  jumlah_Peserta >= 8 ){
		printf("\n || JUMLAH MELEBIHI BATAS ATAU MASUKAN SALAH ||\n"); goto mulai;
	}else 
	
	// perulangan untuk jumlah peserta yang diinputkan.
	// didalam perulangan ini terdapat program.
	// inputkan nama, kode paket, kode tambahan.
	// menghitung biaya tarif, pajak, jumlah biaya total.
	// lalu cetak nama paket, fasilitas tambahan, biaya tarif, pajak, jumlah biaya total.
	for (int i=1 ; i<=jumlah_Peserta; i++) 
    {
    printf(" \n %d.", i);
    printf("\n");
    printf("\n Nama Peserta                   : ");
	scanf("%s",peserta[i].nama);
	fflush(stdin);
	
    ulang1 :
    printf(" Kode Paket                     : ");
    scanf("%d", &kode_paket);
    if(kode_paket==01 || kode_paket== 1){
        nama_paket[i] =" Yogyakarta - Parangtritis ";
        biaya_paket= 300000;
	   }else if(kode_paket==02 || kode_paket== 2) {
        nama_paket[i] =" Klaten - Gunung Bromo ";
        biaya_paket= 750000;
	   }else if (kode_paket==03 || kode_paket== 3) {
        nama_paket[i] =" Solo - Lawang sewu   ";
        biaya_paket= 400000;
	   }else {printf("\n Paket Tidak Tersedia !!! \n"); fflush(stdin);	   
	   goto ulang1;}
		   
	printf(" Nama Paket                     :%s\n",nama_paket[i]);
	
	ulang2 :
	printf(" Kode Tambahan                  : ");
	scanf("%s", &kode_tambahan);
	if ( kode_tambahan == 'a' || kode_tambahan== 'A'){
		fasilitas[i]="penginapan \t";
		biaya_tambahan = 600000;
	} else if ( kode_tambahan == 'b' || kode_tambahan== 'B'){
		fasilitas[i]="Tes Covid \t";
		biaya_tambahan = 150000;
    } else if ( kode_tambahan == 'c' || kode_tambahan== 'C'){
		fasilitas[i]="Kuliner \t";
		biaya_tambahan = 300000;
	} else { printf(" Paket Tidak Tersedia \a\a\n"); fflush(stdin); goto ulang2 ;}

     printf(" Fasilitas                      : %s\n", fasilitas[i]);
     
     biaya_tarif = (biaya_paket + biaya_tambahan);
     printf(" biaya tarif                    : Rp %d\n", biaya_tarif);
     pajak = (0.1*biaya_tarif);
     printf(" Pajak 10 %%                     : Rp %d\n", pajak);
     peserta[i].jumlah_total = (biaya_tarif + pajak);
     printf(" jumlah biaya total             : Rp %d\n",peserta[i].jumlah_total );
     
    
	// mencetak daftar pembayaran travel.
	printf("\n\n ------------------------------------------------------------------------------");}
    printf("\n ------------------------------------------------------------------------------");
    printf("\n\n                               DAFTAR PEMBAYARAN TRAVEL                         ");
    printf("\n ------------------------------------------------------------------------------");
    printf("\n | No  Nama\t  Nama Paket\t\t\t        Fasilitas       Jumlah|");
    printf("\n |     Peserta\t         \t\t\t        Tambahan        Tarif |");
    printf("\n ------------------------------------------------------------------------------");
    
	for (int i=1 ; i<=jumlah_Peserta; i++)
    printf("\n | %d | %s | %s\t|    %s| %d|\n\n",i, peserta[i].nama, nama_paket[i],
           fasilitas[i], peserta[i].jumlah_total);
    printf("\n ------------------------------------------------------------------------------");
    printf("      TERIMA KASIH TELAH MEMILIH KAMI SEBAGAI PARTNER PERJALANAN ANDA \n\n");
	printf("                  ^,^ SEMOGA HARI ANDA MENYENANGKAN ^,^               \n");
           
    // mengakhiri program
    printf("\n ------------------------------------------------------------------------------\n\n");
    printf("                       |  1. MULAI ULANG PROGRAM |                               \n");
    printf("                       |  2. LANJUTKAN PROGRAM   |                               \n");
    printf("                       |  3. KELUAR PROGRAM      |                               \n");
    printf("\n ------------------------------------------------------------------------------\n");
	printf("   MASUKAN PILIHAN ANDA :   ");
	scanf("%d", &pilihan);
	
	if( pilihan == 1 || pilihan == 01){
		system("cls"); goto menu;
	}else if ( pilihan == 2 || pilihan == 02 ){
		goto mulai;
	}else if ( pilihan == 3 || pilihan == 03 ){
	printf("\n ------------------------------------------------------------------------------\n");
	printf("      TERIMA KASIH TELAH MEMILIH KAMI SEBAGAI PARTNER PERJALANAN ANDA \n\n");
	printf("                  ^,^ SEMOGA HARI ANDA MENYENANGKAN ^,^               \n\n");
	}	     

}
