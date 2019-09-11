// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul          : 8
// Percobaan      : 1 TP
// Tanggal        : 9 Maret 2016
// Nama (NIM)     : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File      : problem1.c
// Deskripsi      : konversi sudut ke radian

#include <stdio.h>
#define pi 3.14159


// Deklrasi fungsi disini
float KonvSudut (float sudut);

int main(){
    float sudut;        // Deklrasi variable
    float rad;

    // ALGORITMA
    printf("Masukkan sudut dalam derajat :\n"); //memnaca input sudut
    scanf("%f",&sudut);
    rad = KonvSudut(sudut);         //memanggil fungsi konversi
    printf("Hasil konversi sudut ke radian adalah : %0.2f rad\n",rad);  //menampilkan output
    return 0;

}

// Definisi fungsi disini
float KonvSudut (float sudut){
    float rad;  //variable lokal
    rad = (sudut/180.0)*pi;         //proses
    return rad;
}


