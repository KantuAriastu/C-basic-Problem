// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 5
// Percobaan : 3
// Tanggal : 1 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem3.c
// Deskripsi : menginput dua buah matrix dan menghasilkan nilai penjumlhan dan nilai determinan

#include <stdio.h>1

int main(){
    float MatA[2][2];  //deklarasi variable
    float MatB[2][2];
    float MatC[2][2];
    int i,j;
    float det;

    printf("Masukkan Matriks A baris 1 :\n");    //meminta input matrix
    for (i=0;i<=1;i++){
        scanf("%f",&MatA[0][i]);
   }
   printf("Masukkan Matriks A baris 2 :\n");
    for (i=0;i<=1;i++){
        scanf("%f",&MatA[1][i]);
   }
    printf("Masukkan Matriks B baris 1 :\n");
    for (i=0;i<=1;i++){
        scanf("%f",&MatB[0][i]);
   }
   printf("Masukkan Matriks B baris 2 :\n");
    for (i=0;i<=1;i++){
        scanf("%f",&MatB[1][i]);
   }
    printf("Hasil Penjumlahan Matriks A + Matriks B :\n");  //loop untuk penjumlahan dan hasil
    for (i=0;i<=1;i++){
        for (j=0;j<=1;j++){
            MatC[i][j]=MatA[i][j]+MatB[i][j];
        }
    }
    for (i=0;i<=1;i++){
        for (j=0;j<=1;j++){
            if(j!=1){
                printf("%.2f ",MatC[i][j]);
            }
            else{
                printf("%.2f",MatC[i][j]);
            }
        }
        printf("\n");
    }

    det=(MatC[0][0]*MatC[1][1])-(MatC[0][1]*MatC[1][0]); //proses determinan
    printf("Determinan dari matriks diatas adalah %.2f\n",det); //menuliskan det pada layar

    return 0;
}
