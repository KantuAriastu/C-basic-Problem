// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 3
// Percobaan : 3
// Tanggal : 23 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem3.c
// Deskripsi : memilih jenis elemen dan menghitung nilai total apabila seri atau paralel

#include <stdio.h>

int main (){
    double nilai1,nilai2,hasil;
    int conf;
    char jenis;


    printf("Silahkan memilih jenis komponen yang akan dihitung\n"); //membaca jenis komponne
    printf("a. Resistor\n");
    printf("b. Kapasitor\n");
    scanf("%c",&jenis);


    if ((jenis=='a')||(jenis=='A')){ //percabangan sesuai dengan pilihan pilihan
        printf("Apakah resistor dirangkai seri atau paralel?\n");//membaca jenis konfigurasi
        printf("1. Seri\n");
        printf("2. Paralel\n");
        scanf("%d",&conf);
        printf("Masukkan nilai R1 :\n"); //membaca nilai elemen
        scanf("%lf",&nilai1);
        printf("Masukkan nilai R2 :\n");
        scanf("%lf",&nilai2);
        if (conf==1){
            hasil = nilai1+nilai2;
            printf("Nilai resistansi total = %.3f ohm\n",hasil);//menampilkan hasil
        }
        if (conf==2){
            hasil = (nilai1*nilai2)/(nilai1+nilai2);
            printf("Nilai resistansi total = %.3f ohm\n",hasil);//menampilkan hasil
        }
    }
    if ((jenis=='b')||(jenis=='B')){ //percabangan sesuai dengan pilihan pilihan
        printf("Apakah kapasitor dirangkai seri atau paralel?\n");//membaca jenis konfigurasi
        printf("1. Seri\n");
        printf("2. Paralel\n");
        scanf("%d",&conf);
        printf("Masukkan nilai C1 :\n"); //membaca nilai elemen
        scanf("%lf",&nilai1);
        printf("Masukkan nilai C2 :\n");
        scanf("%lf",&nilai2);
        if (conf==2){
            hasil = nilai1+nilai2;
            printf("Nilai kapasitansi total = %.3e Farad\n",hasil);//menampilkan hasil
        }
        if (conf==1){
            hasil = (nilai1*nilai2)/(nilai1+nilai2);
            printf("Nilai kapasitansi total = %.3e Farad\n",hasil);//menampilkan hasil
        }
    }

    return 0;
}
