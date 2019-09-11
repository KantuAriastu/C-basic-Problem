// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 1
// Percobaan : 6
// Tanggal : 16 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem6.c
// Deskripsi : meminta satu input karakter dan menampilkan nilai dari kode ASCII nya

#include <stdio.h>

int main(){/*prosedur utama*/
    char x;/*deklrasai variable*/

    printf("Masukkan karakter :\n");
    scanf("%c",&x);/*meminta dan membaca input*/
    printf("Nilai ASCII dari karakter %c adalah %d\n",x,x); /*menulis output ke layar*/
	return 0;
}
