#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


	struct tgl_lahir {
		int tgl;
		int bln;
		int thn;
	};
	struct alamat {
		char jln[40];
		char ct[20];
		char prov[20];
	};
	struct rekening {
		char no_rek[12];
		long int saldo;
		char nama[20];
		char bank[10];
		struct tgl_lahir TL;
		int umur;
		struct alamat alt;
	};
	
int main() {
	
	int a;
	int b=0;
	int n=2019;
	int l=1;
	int pilihanbank;
	int pilihanmenu;
	int total=0;
	int case56;
	char randomize[245];
	char casect[20];
	struct rekening bank[3];
	
	
	while(l==1){
		printf("Menu : \n\t1. Pendaftaran Nasabah\n\t2. Menampilkan Seluruh Data Nasabah\n\t3. Kota Nasabah\n\t4. Saldo Total Seluruh Nasabah\n\t5. Umur Nasabah\n\t6. Saldo Nasabah\n");
		scanf("%d",&pilihanmenu);
		
		switch(pilihanmenu){
		case 1:
			{
				printf("Nama Nasabah: ");
				scanf("%s",&bank[b].nama);
				bank[b].saldo = rand() %100000000+100000;
				printf("Pilih Nama Bank : \n\t1. MEGA\n\t2. BCA\n\t3. Danamon\n");
				scanf("%d",&pilihanbank);
				switch(pilihanbank){
					case 1:
						strcpy(bank[b].bank,"MEGA");
						strcpy(bank[b].no_rek,"111");
						break;
					case 2:
						strcpy(bank[b].bank,"BCA");
						strcpy(bank[b].no_rek,"547");
						break;
					case 3:
						strcpy(bank[b].bank,"Danamon");
						strcpy(bank[b].no_rek,"234");
						break;
					default:
						printf("Mohon Maaf Pilihan Anda Tidak Tersedia");
						break;
				}
					printf("Tanggal lahir : \n");
					printf("\tTanggal		: ");
					scanf("%d",&bank[b].TL.tgl);	
					printf("\tBulan		: ");
					scanf("%d",&bank[b].TL.bln);
					printf("\tTahun		: ");
					scanf("%d",&bank[b].TL.thn);
					fflush(stdin);
					
					bank[b].umur = n - bank[b].TL.thn;
					
					printf("Alamat Nasabah : \n");
					printf("\tAlamat		: ");
					scanf("%[^\n]",&bank[b].alt.jln);	
					fflush(stdin);
					printf("\tKota		: ");
					scanf("%[^\n]",&bank[b].alt.ct);
					fflush(stdin);
					printf("\tProvinsi	: ");
					scanf("%[^\n]",&bank[b].alt.prov);
					fflush(stdin);
						
						strcat(bank[b].no_rek,itoa(rand()%750+245,randomize,10));
						if(bank[b].TL.tgl<10){
							strcat(bank[b].no_rek,"0");
						}
						strcat(bank[b].no_rek,itoa(bank[b].TL.tgl,randomize,10));	
						if(bank[b].TL.bln<10){
							strcat(bank[b].no_rek,"0");
						}
						strcat(bank[b].no_rek,itoa(bank[b].TL.bln,randomize,10));
						if((bank[b].TL.thn%100)<10){
							strcat(bank[b].no_rek,"0");
						}
						strcat(bank[b].no_rek,itoa((bank[b].TL.thn)%10,randomize,10));
						printf("Nomor Rekening Anda : %s\n",bank[b].no_rek);
						fflush(stdin);
				
				b++;
			}
			break;
		case 2:				
			{
				printf("Data Nasabah sebagai berikut \n");
				for(a=0;a<b;a++){
					printf("Nama\t\t\t: %s\n",bank[a].nama);
					printf("Nama Bank\t\t: %s\n",bank[a].bank);
					printf("No. Rekening\t: %s\n",bank[a].no_rek);
					printf("Umur\t\t\t: %d\n",bank[a].umur);
					printf("Tanggal Lahir\t: %d-%d-%d\n",bank[a].TL.tgl,bank[a].TL.bln,bank[a].TL.thn);
					printf("Alamat Lengkap\t: Jl. %s, %s, %s\n",bank[a].alt.jln,bank[a].alt.ct,bank[a].alt.prov);
					printf("Saldo \t\t\t: %d\n",bank[a].saldo);
					printf("\n\n");
					}	
			}
			break;
		case 3:				
			{
				printf("Kota : ");
				scanf("%s",&casect);
				fflush(stdin);
				for(a=0;a<b;a++){
					if(strcmp(bank[a].alt.ct,casect)==0){
						printf("Nasabah dengan nama %s bertempat tinggal di %s\n",bank[a].nama,casect);
					}
					}
			}
			break;			
		case 4:				
			{
				for(a=0;a<b;a++){
					total = total + bank[a].saldo;
				}
				printf("Total Saldo seluruh Nasabah adalah Rp.%d",total);
			}
			break;
		case 5:	
			{
				printf("Umur Nasabah yang dicari :");
				scanf("%d",&case56);
				for(a=0;a<b;a++){
					if(bank[a].umur<case56){
						printf("Nasabah dengan nama %s berumur kurang dari %d\n",bank[a].nama,case56);
					}else {
						printf("Nasabah dengan nama %s berumur lebih dari %d\n",bank[a].nama,case56);
					}
				}	
			}
			break;
		case 6:			
			{
				printf("Jumlah saldo Nasabah yang dicari : ");
				scanf("%d",&case56);
				for(a=0;a<b;a++){
					if(bank[a].saldo<case56){
						printf("Nama %s saldo kurang dari Rp.%d\n",bank[a].nama,case56);
					}else{
						printf("Nama %s saldo lebih dari Rp.%d\n",bank[a].nama,case56);
					}
				}
			}
			break;
	
		default:
			printf("Silakan Pilih Ulang");
			break;
		}	
		
		printf("\nApakah ingin melakukan proses lainnya? (1. Ya/2. Tidak)");
		scanf("%d",&l);
		system("cls");
	}
	return 0;
}
