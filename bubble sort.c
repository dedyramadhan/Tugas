#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	int o, k, x, y, r=1, p;
	
	int data[9] = {6,1,9,2,5,4,7,8,3};
	int l = sizeof(data)/sizeof(data[0]); 
	
	printf("Angka = ");
	for	(o=0;o<l;o++){
		printf("%d ",data[o]);
	}
	printf("\n");
	while(r==1){
		printf("\n1. Ascending");
		printf("\n2. Descending");
		printf("\n0. Exit");
		printf("\nMasukkan Pilihan Anda = ");
		scanf("%d",&p);
		switch (p){
			case 1:{
				for(o=0;o<l-1;o++){
					for(k=0;k<l-1;k++){
						if(data[k+1]<data[k]){
							int temp=data[k];
							data[k]=data[k+1];
							data[k+1]=temp;
						}
					}
				}
				printf("\nAngka = ");
				for	(o=0; o<l; o++){
					printf("%d ",data[o]);
				}
				break;
			}
			case 2:{
				for(o=0;o<l-1;o++){
					for(k=0; k<l-1;k++){
						if(data[k+1]>data[k]){
							int temp=data[k];
							data[k]=data[k+1];
							data[k+1]=temp;
						}
					}
				}
				printf("\nAngka = ");
				for	(o=0;o<9;o++){
					printf("%d ",data[o]);
				}
				break;
			}
			case 0:
				r=0;
				break;
		}
	}
	return 0;
}
