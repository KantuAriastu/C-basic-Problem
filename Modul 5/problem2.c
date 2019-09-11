// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 5
// Percobaan : 2
// Tanggal : 1 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem2.c
// Deskripsi : menginput suatu deret karakter pada array dan menuliskan deret tersebut secara ascending

#include <stdio.h>1

int main(){
   char arrayin [10];  //deklrasi variable
   int i,c,d;
   char temp;

    //algoritma
    printf("Masukkan 10 buah karakter :\n"); //input array
    for (i=0;i<=9;i++){
        scanf("%c",&arrayin[i]);
   }

    for (c = 1 ; c <= 9; c++) {
    d = c;

    while ( d > 0 && arrayin[d] < arrayin[d-1]) {    //sort insertion
      temp         = arrayin[d];
      arrayin[d]   = arrayin[d-1];
      arrayin[d-1] = temp;

      d--;
    }
  }
   printf("Deret karakter jika diurutkan secara ascending\n"); //menuliskan pada layar
   for (i=0;i<=9;i++){
       printf("%c",arrayin[i]);
   }
    printf("\n");

	return 0;
}
