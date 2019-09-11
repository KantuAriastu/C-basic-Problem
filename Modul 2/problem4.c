// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 2
// Percobaan : 4
// Tanggal : 19 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem4.c
// Deskripsi : Meminta input 4 angka dan menamilkan simpangan baku

#include <stdio.h>

int main (){                                        /*prosedur utama */
    float x1,x2,x3,x4 ;                           /*deklrasai variable*/
    float mean;
    float S;

    printf("Masukkan 4 data :\n");                  /*meminta masukan */
    scanf("%f %f %f %f",&x1,&x2,&x3,&x4);
    mean = (x1+x2+x3+x4)/4;
    S=sqrt(((x1-mean)*(x1-mean)+(x2-mean)*(x2-mean)+(x3-mean)*(x3-mean)+(x4-mean)*(x4-mean))/3) ;         /*proses simpangan*/
    printf("Nilai simpangan baku = %.2f\n",S);  /*menampilkan ke layar*/

    return 0;

}
