#include <stdio.h>
#include <stdlib.h>


int main() 
{

	char nama[30];
	char alamat[40];
	char no[20];
	int umur;
	int bb;
	
	printf("\t\t\t\t\t\t\tBIODATA\n");		
	
	printf("\n\n NAMA \t\t : ");	
	gets(nama);
	printf(" ALAMAT \t : ");
	gets(alamat);
	printf(" NO. TELP \t : ");
	scanf("%s",&no);
	printf(" UMUR \t\t : ");
	scanf("%d", &umur);
	printf(" BERAT BADAN \t : ");
	scanf("%d", &bb);
	
	printf("\nData yang telah dimasukkan sebagai berikut. \n");
	printf(" NAMA \t\t : %s\n",nama);
	printf(" ALAMAT \t : %s\n",alamat);
	printf(" NO. TELP \t : %s\n",no);
	printf(" UMUR \t\t : %d\n",umur);
	printf(" BERAT BADAN \t : %d\n",bb);
		
	printf("\n  \t \t \t \t \t \t Data Sudah Lengkap\n");

	return 0;
}
