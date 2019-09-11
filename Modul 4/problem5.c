// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 4
// Percobaan : 5
// Tanggal : 26 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem5.c
// Deskripsi : memberikan hasil iterasi gausian sidel hingga beda 0.0001
#include <stdio.h>
#include <math.h>
int main(){
    int count;
    float x0,xn1,xn2,selisih;

    printf("Masukkan nilai x0 :\n"); //meminta input awal
    scanf("%f",&x0);
    printf("n\tx\n");
    xn1=sqrt(x0)+1;
    printf("0\t%.4f\n",x0);
    printf("1\t%.4f\n",xn1);
    count=1;      //pengulangan iterasi
    do{
            count=count+1;
            xn2=sqrtf(xn1)+1;
            printf("%d\t%.4f\n",count,xn2); //menampilkan iterasi
            selisih=fabs(xn2-xn1);
            xn1=xn2;
        }while (selisih > 0.0001);

	return 0;
}
