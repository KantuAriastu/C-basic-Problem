// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 3
// Percobaan : 0 (TP)
// Tanggal : 2 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem1.c
// Deskripsi : Menampilkan indeks nilai sesuai dengan nilai yg diinput

#include <stdio.h>

int main (){
    float nilai;

    printf("Masukkan Nilai (0-100):\n"); //membaca nilai
    scanf("%f",&nilai);
    if ((nilai>=75) && (nilai<=100)) {    //percabangan kasus nilai
        printf("Indeks yang diperoleh adalah A\n"); }
    else if ((nilai>=70) && (nilai<75)) {
        printf("Indeks yang diperoleh adalah AB\n"); }
    else if ((nilai>=65) && (nilai<70)) {
        printf("Indeks yang diperoleh adalah B\n"); }
    else if ((nilai>=60) && (nilai<65)) {
        printf("Indeks yang diperoleh adalah BC\n"); }
    else if ((nilai>=55) && (nilai<60)) {
        printf("Indeks yang diperoleh adalah C\n"); }
    else if ((nilai>=0) && (nilai<55)) {
        printf("Indeks yang diperoleh adalah E\n"); }
    return 0;
}
