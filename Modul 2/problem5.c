// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 2
// Percobaan : 5
// Tanggal : 19 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem5.c
// Deskripsi : Meminta input A B cin full adder dan menampilkan hasil full adder
#include <stdio.h>



int main (){                                        /*prosedur utama */
    int a, b , c_in ;     /*deklrasai variable*/
    int S,c_out;

    printf("Masukkan nilai a, b, dan c_in :\n"); /*meminta masukan*/
    scanf("%d %d %d",&a,&b,&c_in);
    S = (a^b)^c_in;                             /*proses full adder*/
    c_out = ((a^b)&&c_in)||(a&&b);
    printf("S = %d\nC_out = %d\n",S,c_out);   /*menampilkan hasil ke layar*/



    return 0;

}
