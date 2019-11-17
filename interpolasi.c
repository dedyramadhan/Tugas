#include <stdio.h>
#include <stdlib.h>

int main(){
	int data[9]={3,9,11,12,15,17,23,31,35};
	int awal=0; 
	int akhir=8; 
	int search;
	int posisi;
	int f= 0;
	printf("\nMasukkan Angka Yang Dicari= ");
	scanf("%d",&search);
	while(f!=1){
		posisi=((search-data[awal])*(akhir-awal)/(data[akhir]-data[awal])+awal);
		if(search==data[posisi]){
			printf("Data Ditemukan");
			f=1;
		}
		else if(search>data[posisi]){
			awal=posisi+1;
		}
		else if(search<data[posisi]){
			printf("Data Tidak Ditemukan");
			f=1;
		}
	}
	return 0;
}
