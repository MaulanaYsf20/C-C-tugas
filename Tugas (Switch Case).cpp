#include<stdio.h>
#include<stdlib.h>

int main()
{
	char movie;
	
	printf("\n========== DAFTAR FILM BIOSKOP ========\n\n");
	printf("  Masukan Kode untuk melihat jadwal penayangan \n\n");
	printf("     JUDUL FILM                 KODE \n\n");
	printf(" (1) The Eternals               - A \n");
	printf(" (2) Black Widow                - B \n");
	printf(" (3) Spider-man : far from home - C \n");
	printf(" (4) Mortal Combat              - D \n");
	printf(" (5) Cruella                    - E \n\n");
	printf(" Masukan Kode : ");
	scanf ("%s", &movie);

	switch(movie)
	{
		case 'A' :
			printf("\n The Eternals \n");
			printf(" jam tayang : (12.00-20.00 wib) \n");
			printf(" Teater     : 1 \n");
			break;
		case 'B' :
			printf("\n Black Widow \n");
			printf(" jam tayang : (12.00-20.45 wib) \n");
			printf(" Teater     : 2 \n");
			break;
		case 'C' :
			printf("\n Spider-man : far from home \n");
			printf(" jam tayang : (12.00-22.45 wib) \n");
			printf(" Teater     : 3 \n");
			break;
		case 'D' :
			printf("\n Mortal Combat \n");
			printf(" jam tayang : (12.00-19.00 wib) \n");
			printf(" Teater     : 4 \n");
			break;
		case 'E' :
			printf("\n Cruella \n");
			printf(" Jam tayang : (12.00-21.00 wib) \n");
			printf(" Teater     : 5 \n");
			break;	
		default :
		    printf("\n kode yang anda masukan salah! \n");			
	}
	return 0;	
}
