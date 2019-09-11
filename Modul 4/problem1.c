// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 4
// Percobaan : 1
// Tanggal : 26 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem1.c
// Deskripsi : menggambar segitiga dengan bintang dengan input tinggi
#include <stdio.h>
int main(){  //algoritma
    int kaki; //deklrasi variable
    int i,j;

    printf("Masukkan panjang kaki segitiga :\n"); //meminta output
    scanf("%d",&kaki);

    for (i=1;i<=kaki;i++){ //pemgulangan berdasarkan kaki
        for (j=kaki;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
	return 0;
}
