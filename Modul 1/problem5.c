// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 1
// Percobaan : 5
// Tanggal : 16 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem5.c
// Deskripsi : meminta input bilangan float pada user dan menampilkan ke layar masing masing 2 kali
#include <stdio.h>

int main(){/*prosedur utama*/
    float x,y;/*deklrasai variable*/

    printf("Masukkan bilangan floating point ke-1 :\n");
    scanf("%f",&x);                     /*meminta dan membaca nilai float*/
    printf("Bilangan ke-1 : %.2f\n",x); /*menulis output ke layar*/
    printf("Masukkan bilangan floating point ke-2 :\n");
    scanf("%f",&y);                     /*meminta dan membaca nilai float*/
    printf("Bilangan ke-2 : %.2f\n",y); /*menulis output ke layar*/
	return 0;
}
