// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 3
// Percobaan : 0 (TP)
// Tanggal : 22 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem2.c
// Deskripsi : menampilkan nilai hasil konversi dari (cm,inchi, kaki) ke (inchi , cm, kaki sesuai input)

#include <stdio.h>

int main (){
    float nilai,hasil;
    int pil1 , pil2;

    printf("Silahkan memilih satuan asal\n"); //membaca satuan awal
    printf("1. cm\n");
    printf("2. inchi\n");
    printf("3. kaki\n");
    scanf("%d",&pil1);
    printf("Silahkan memilih satuan tujuan\n");//membaca satuan akhir
    printf("1. cm\n");
    printf("2. inchi\n");
    printf("3. kaki\n");
    scanf("%d",&pil2);
    printf("Masukkan nilai yang akan dikonversi :\n"); //membaca nilai yg dikonversi
    scanf("%f",&nilai);
    if ((pil1==1)&&(pil2==1)){ //percabangan sesuai dengan pilihan pil1 dan pil2
        hasil = nilai;
        printf("%.3f cm = %.3f cm\n",nilai,hasil);
    }
    else if ((pil1==1)&&(pil2==2)){
        hasil = nilai/2.54;
        printf("%.3f cm = %.3f inchi\n",nilai,hasil);
    }
    else if ((pil1==1)&&(pil2==3)){
        hasil = nilai/30.48;
        printf("%.3f cm = %.3f kaki\n",nilai,hasil);
    }
    else if ((pil1==2)&&(pil2==1)){
        hasil = nilai*2.54;
        printf("%.3f inchi = %.3f cm\n",nilai,hasil);
    }
    else if ((pil1==2)&&(pil2==2)){
        hasil = nilai;
        printf("%.3f inchi = %.3f inchi\n",nilai,hasil);
    }
    else if ((pil1==2)&&(pil2==3)){
        hasil = nilai/12;
        printf("%.3f inchi = %.3f kaki\n",nilai,hasil);
    }
    else if ((pil1==3)&&(pil2==1)){
        hasil = nilai*30.48;
        printf("%.3f kaki = %.3f cm\n",nilai,hasil);
    }
    else if ((pil1==3)&&(pil2==2)){
        hasil = nilai*12;
        printf("%.3f kaki = %.3f inchi\n",nilai,hasil);
    }
    else if ((pil1==3)&&(pil2==3)){
        hasil = nilai;
        printf("%.3f kaki = %.3f kaki\n",nilai,hasil);
    }
    return 0;
}
