// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 6
// Percobaan : 1
// Tanggal : 4 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem1.c
// Deskripsi : program yang mengecek apakah 2 kalimat sama atau tidak

#include <stdio.h>

int main(){
    char kal1[100]; //deklarasi variable
    char kal2[100];
    int i;
    int same;

    //algoritma
    printf("Masukkan kalimat ke1 :\n");  //meminta input
    fgets ( kal1,100, stdin );
    printf("Masukkan kalimat ke2 :\n");
    fgets ( kal2,100, stdin );
    same =1;
    for (i=0;i<=100;i++){
        if (kal1[i]!=kal2[i]){    //pengecekan kesamaan
            same=0;
            break;
        }
        if ((kal1[i]=='\n')||(kal2[i]=='\n')){
            break;
        }
    }
    if (same==0){
        printf("Kedua kalimat tidak sama\n");  //output ke layar
    }else if (same==1){
         printf("Kedua kalimat sama\n");
    }
    return 0;
}
