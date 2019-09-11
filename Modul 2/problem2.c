// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 2
// Percobaan : 2
// Tanggal : 19 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem2.c
// Deskripsi : Meminta suatu nilai cos sudut dan menampilkan sudutnya ke layar

#include <stdio.h>
#include <math.h>

int main (){                                        /*prosedur utama */
    float pi = 3.1415926;                           /*deklrasai nilai dan variable*/
    float cosx,sudut;

    printf("Masukkan nilai cosinus suatu sudut :\n"); /*meminta masukan */
    scanf("%f",&cosx);
    sudut = acos(cosx)*180/pi;                                      /*proses sudut*/
    printf("Nilai arc cos dari %.2f adalah %.2f derajat\n",cosx,sudut);  /*menampilkan ke layar*/

    return 0;

}
