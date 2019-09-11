// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 5
// Percobaan : 1 TP
// Tanggal : 1 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem1.c
// Deskripsi : menginput suatu deret bilangan pada array dan menuliskan lagi secara descending

#include <stdio.h>

int main(){
   int arrayin [10];  //deklrasi variable
   int i,d,temp,c;

    //algoritma
    printf("Masukkan 10 bilangan integer :\n"); //input array
    for (i=0;i<=9;i++){
        scanf("%d",&arrayin[i]);
   }

  for (c = 1 ; c <= 9; c++) {   //pengururan insertion
    d = c;
    while ( d > 0 && arrayin[d] > arrayin[d-1]) {
      temp         = arrayin[d];
      arrayin[d]   = arrayin[d-1];
      arrayin[d-1] = temp;

      d--;
    }
  }
    printf("Deret bilangan integer jika diurutkan secara descending\n");   //\menuliskan pada layar
   for (i=0;i<=9;i++){
        if(i!=9){
            printf("%d ",arrayin[i]);
        }
        else {
            printf("%d\n",arrayin[i]);
        }
   }


	return 0;
}
