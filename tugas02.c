#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>




int pangkat(int l, int p){
	if(p == 1)
	{
		return l;
	}
	else
	{
		return l*pangkat(l,(p-1));
	}
}


int main() {
	int l,p;
	int hasil=1;
	int r=0;
	
	printf(" Angka yang digunakan adalah ");
	scanf("%d",&l);
	printf("\n");
	
	printf(" Angka tersebut akan dipangkatkan ");
	scanf("%d",&p);
	printf("\n");
	printf(" Hasil dengan rekursif adalah %d\n",pangkat(l,p));
	
		for(r=0;r<p;r++){
			hasil=hasil*l;
		}
		printf("\n");
	printf(" Sedangkan dengan iterasi biasa adalah %d\n",hasil);
	
	
	return 0;
}
