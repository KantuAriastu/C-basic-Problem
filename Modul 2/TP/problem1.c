// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 2
// Percobaan : 1
// Tanggal : 19 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem1.c
// Deskripsi : Meminta dan input nilai jari2 bola dan menampilkan volumenya

#include <stdio.h>

int main (){                                        /*prosedur utama */
    float pi = 3.1415926;                           /*deklrasai nilai dan variable*/
    float r;
    float Volume;

    printf("Masukkan jari-jari bola (cm) :\n"); /*meminta masukan */
    scanf("%f",&r);
    Volume = 4*(pi*r*r*r)/3;                                      /*proses luas*/
    printf("VOlume bola adalah %.2f cm3\n",Volume);  /*menampilkan ke layar*/

    return 0;

}
