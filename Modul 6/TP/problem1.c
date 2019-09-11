// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 6
// Percobaan : 1 TP
// Tanggal : 4 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem1.c
// Deskripsi : Menginput suatu kata dan menampilkan huruf pertamanya
#include <stdio.h>

int main(){
    char kata[15];

    printf("Masukkan sebuah kata :\n");  //meminta input
    scanf("%s",kata);
    printf("%s diawali dengan huruf %c\n",kata,kata[0]); //menampilkan output

    return 0;
}
