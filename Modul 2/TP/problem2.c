// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 2
// Percobaan : 0 (TP)
// Tanggal : 17 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem2.c
// Deskripsi : Meminta dan input nilai sisi dan tinggi trapesium dan menampilkan luasnya

#include <stdio.h>

int main (){
    float s1,s2,t;                                  /*deklarasi variable*/
    float Luas;
    printf("Masukkan sisi 1 trapesium (cm) :\n");  /* meminta masukan */
    scanf("%f",&s1);
    printf("Masukkan sisi 2 trapesium (cm) :\n");
    scanf("%f",&s2);
    printf("Masukkan tinggi trapesium (cm) :\n");
    scanf("%f",&t);
    Luas = ((s1+s2)*t)/2;                            /*proses luas*/
    printf("Luas trapesium adalah %.2f cm2\n",Luas);  /*menampilkan luas*/

    return 0;

}
