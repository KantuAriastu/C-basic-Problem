/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 9
 * Percobaan      : 0 (TP 1)
 * Tanggal        : 28 Maret 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem2.c
 *
 * Deskripsi      : Program yang meminta jumlah panjang karakter, membaca sebuah kalimat
 *                  dan menampilkannya lagi ke layar
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Deklarasi Variabel
	int *ptr;
	int n;

	//Input Panjang Karakter
    printf("Masukkan panjang karakter dari kalimat :\n");
    scanf("%d%*c",&n);
    ptr = (char*)malloc((n+1)*sizeof(char));
	//Input Kalimat
    printf("Masukkan sebuah kalimat :\n");
     fgets ( ptr,n, stdin );
     ptr[n+1]='\0';

	//Cetak Output
    printf("Kalimat yang dimasukkan adalah : %s\n",ptr);
    free(ptr);
    return 0;
}
