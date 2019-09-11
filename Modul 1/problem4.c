// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 1
// Percobaan : 4
// Tanggal : 16 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem4.c
// Deskripsi : meminta input dua buah bilangan integer (berurut dipisah spasi, menampilkan dengan
//              urutan terbalik

#include <stdio.h>

int main(){/*prosedur utama*/
    int x,y;/*deklrasai variable*/

    printf("Masukkan dua bilangan integer :\n");
    scanf("%d %d",&x,&y); /*meminta dan membaca input*/
    printf("Bilangan ke-1 : %d\n",y); /*menulis output ke layar*/
    printf("Bilangan ke-2 : %d\n",x);
	return 0;
}
