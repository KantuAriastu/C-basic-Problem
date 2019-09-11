// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul          : 8
// Percobaan      : 2 TP
// Tanggal        : 9 Maret 2016
// Nama (NIM)     : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File      : problem2.c
// Deskripsi      : menggambar bangunan dengan tinggi sesuai tinggi input

#include <stdio.h>

// Deklarasi Prosedur disini
void bangunan(int t);

int main(){
    int t; // Deklarasi variable

    // ALGORITMA
	printf("Masukkan ketinggian bangunan :\n"); // menerima input tinggi
	scanf("%d",&t);
	bangunan(t);        //memanggi prosedur gambar bangunan

	return 0;

}


// Definisi Prosedur disini
void bangunan(int t)
{
    int i;              // Variable lokal

    for ( i = 1; i <= t ; i++  ){           //pengulangan menggambar tinggi bangunan
        printf("    ****    \n");
    }
    printf("************\n");                   // menggambar dasar
}
