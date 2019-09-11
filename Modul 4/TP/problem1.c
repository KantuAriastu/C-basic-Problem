// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 4
// Percobaan : 0 (TP)
// Tanggal : 26 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem1.c
// Deskripsi : menampikan hasil nPermutasi R pada layar
#include <stdio.h>

int main (){ //program utama

    int n,r; //deklarasi variable
    int i;
    unsigned long long int hasil;

    //algoritma
    printf("Masukkan nilai n dan r :\n"); //membaca nilai n dan r
    scanf("%d %d",&n,&r);
    hasil=1; //inisialisasi nilai hasil
    i=n;
    while (i>(n-r)){ //pengulangan proses n hingga nilai n-r
        hasil=hasil*i;
        i=i-1;
    }
	printf("Nilai Permutasi %dP%d = %llu\n",n,r,hasil);   //menampilkan hasil
	return 0;

}
