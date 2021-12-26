#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int    J;
	string nama[5], harga[5], variant[4];
	int    kode[5];
	
	
	system("color 0f");
	cout<<"\n\n                 DAFTAR MENU                    "<<endl;
	cout<<"------------------------------------------------    "<<endl;
	cout<<"  |  KODE         VARIANT          HARGA    | \n    "<<endl;
	cout<<"  |   1          CAPPUCCINO        RP 20k   |       "<<endl;
	cout<<"  |   2          LEMON TEA         RP 15k   |       "<<endl;
	cout<<"  |   3          MACCHIATO         RP 30k   |       "<<endl;
	cout<<"  |   4          MILK SHAKE        RP 25k   |       "<<endl;
	cout<<"------------------------------------------------\n\n"<<endl;
 	
	cout<<" MASUKKAN JUMLAH PESANAN : "; 
	cin>>J;
	cout<<endl;
	
	for(int i=0; i<J; i++){
		cout<<endl;
		
		mulai :
		cout<<"Pesanan ke-"<<i+1<<endl;
		cout<<"Masukan Nama {max 5 huruf} : ";
		cin>>nama[i];
		cout<<"Masukan Kode {1,2,3,4,}    : ";
		cin>>kode[i];
		
		if( kode[i]==1 || kode[i]==01 ){
			harga[i]="RP 20K";
			variant[i]="CAPPUCCINO";
		}else if( kode[i]==2 || kode[i]==02 ){
			harga[i]="RP 15K";
			variant[i]="LEMON TEA ";
		}else if( kode[i]==3 || kode[i]==03 ){
			harga[i]="RP 30K";
			variant[i]="MACCHIATO ";
		}else if( kode[i]==4 || kode[i]==04){
			harga[i]="RP 25K";
			variant[i]="MILK SHAKE";
		}else {
			cout<<" !!KODE YANG ANDA MASUKAN SALAH!! "<<endl; fflush(stdin); goto mulai;
		}
	}
	
	system("color f0");
	cout<<endl;
	cout<<"\n\n                    DAFTAR PEMBAYARAN                       "<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"   NO        NAMA            VARIANT             HARGA        \n"<<endl;
	
	for(int i=0; i<J; i++){
	cout<<"    "<<i+1<<"        "<<nama[i]<<"          "<<variant[i]<<"          "<<harga[i]<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	}
	
	getch();
}
