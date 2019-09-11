/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 10
 * Percobaan      : 0 (TP 1)
 * Tanggal        : 31 Maret 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      : Program yang meminta menginput 3 buah bilangan A,B,C
 *                  menginput lagi salah satu nilai tersebut kemudian menampilkan huruf yang
 *                  merepresentasikan nilai tersebut dan menampilkan nilai data sisanya
 */
#include <stdio.h>

int main()
{
	// Deklarasi Tipe Data Bentukan
    typedef struct
    {
        float A;
        float B;
        float C;
    } bilangan;

	//Deklarasi Variabel
	bilangan in;
	float x;


	// Input
    printf("Masukkan nilai A :\n");
    scanf("%f",&in.A);
    printf("Masukkan nilai B :\n");
    scanf("%f",&in.B);
    printf("Masukkan nilai C :\n");
    scanf("%f",&in.C);
    printf("Masukkan lagi salah satu nilai di atas :\n");
    scanf("%f",&x);

	//Proses dan Output
    if (x==in.A){
        printf("Nilai yang dimasukkan ulang adalah nilai A.\n");
        printf("Nilai B adalah %.3f\n",in.B);
        printf("Nilai C adalah %.3f\n",in.C);
    }
    else if (x==in.B){
        printf("Nilai yang dimasukkan ulang adalah nilai B.\n");
        printf("Nilai A adalah %.3f\n",in.A);
        printf("Nilai C adalah %.3f\n",in.C);
    }
    else if (x==in.C){
        printf("Nilai yang dimasukkan ulang adalah nilai C.\n");
        printf("Nilai A adalah %.3f\n",in.A);
        printf("Nilai B adalah %.3f\n",in.B);
    }


    return 0;
}
