// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 2
// Percobaan : 3
// Tanggal : 19 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem3.c
// Deskripsi : Meminta input 4 angka dan menamilkan rata-ratanya

#include <stdio.h>

int main (){                                        /*prosedur utama */
    float x1,x2,x3,x4 ;                           /*deklrasai variable*/
    float Mean;

    printf("Masukkan empat bilangan integer :\n"); /*meminta masukan */
    scanf("%f %f %f %f",&x1,&x2,&x3,&x4);
    Mean = (x1+x2+x3+x4)/4;                                      /*proses mean*/
    printf("Rata-Rata dari %.0f, %.0f, %.0f dan %.0f adalah %.3f\n",x1,x2,x3,x4,Mean);  /*menampilkan ke layar*/

    return 0;

}
