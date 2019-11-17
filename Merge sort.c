#include <stdio.h>
#include <stdlib.h>
int Data[] = {4,7,1,2,9,5,11,21,15,10,3,42,12,53,20,18,60};

void merging(int depan, int tengah, int belakang) {
  
      
    int temp[belakang + 1];
    int d = depan;
    int t = tengah + 1;
    int k = 0;
    while (d <= tengah && t <= belakang)
    {
        if (Data[d] <= Data[t])
            temp[k++] = Data[d++];
        else
            temp[k++] = Data[t++];
    }
    while (d<=tengah)
        temp[k++] = Data[d++];
    while (t <= belakang)
        temp[k++] = Data[t++];
    k--;
    while (k>=0)
    {
        Data[k+depan] = temp[k];
        k--;
    }
}

void sort(int depan, int belakang) {
   int tengah;
   
   if(depan < belakang) {
      tengah= (depan + belakang) / 2;
      sort(depan, tengah);
      sort(tengah+1, belakang);
      merging(depan, tengah, belakang);
   } else { 
      return;
   }   
}

int main() { 
   int i;
   printf("Data sebelum dilakukan pengurutan Merge sort\n");
   for(i=0; i<=16; i++)
      printf("%d ", Data[i]);

   sort(0,16);

   printf("\nData setelah dilakukan pengurutan Merge sort\n");
   
   for(i=0; i<=16; i++)
      printf("%d ", Data[i]);
}
