// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 5
// Percobaan : 4
// Tanggal : 1 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem4.c
// Deskripsi : menginput dua buah matrix 3x3 dan menghasilkan nilai perkalian

#include <stdio.h>1

int main(){
    int MatA[3][3];     //deklarasi variable
    int MatB[3][3];
    int MatC[3][3];
    int i,j,c,sum;


    printf("Masukkan Matriks A baris 1 :\n"); //meminta input matrix
    for (i=0;i<=2;i++){
        scanf("%d",&MatA[0][i]);
   }
   printf("Masukkan Matriks A baris 2 :\n");
    for (i=0;i<=2;i++){
        scanf("%d",&MatA[1][i]);
   }
   printf("Masukkan Matriks A baris 3 :\n");
    for (i=0;i<=2;i++){
        scanf("%d",&MatA[2][i]);
   }
   printf("Masukkan Matriks B baris 1 :\n");
    for (i=0;i<=2;i++){
        scanf("%d",&MatB[0][i]);
   }
   printf("Masukkan Matriks B baris 2 :\n");
    for (i=0;i<=2;i++){
        scanf("%d",&MatB[1][i]);
   }
   printf("Masukkan Matriks B baris 3 :\n");
    for (i=0;i<=2;i++){
        scanf("%d",&MatB[2][i]);
   }

    for (i=0;i<=2;i++){            //proses perkalian matrix dengab looping
        for (j=0;j<=2;j++){
            sum=0;
            for (c=0;c<=2;c++){
                sum=sum+(MatA[i][c]*MatB[c][j]);
            }
            MatC[i][j]=sum;
        }
    }

    printf("Hasil Perkalian Matriks A X Matriks B :\n"); //menampilkan hasil
    for (i=0;i<=2;i++){
        for (j=0;j<=2;j++){
                if(i!=2 || j!=2){
                    printf("%d\t",MatC[i][j]);
                }
                else{
                    printf("%d",MatC[i][j]);
                }
        }
        printf("\n");
    }
    return 0;
}
