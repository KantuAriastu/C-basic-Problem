/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 10
 * Percobaan      : 1
 * Tanggal        : 1 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      : Program yang meminta menginput 3 buah koordinat titik segitiga (x,y,z)
 *                  menghasilkan nilai sudut antara ketiga koordinat
 */
#include <stdio.h>
#include <math.h>

#define pi 3.1415926

float sudutCalc (float x, float y, float z);

int main()
{
	// Deklarasi Tipe Data
    typedef struct koordinat
    {
        int x;
        int y;
        int z;
    } koordinat;

	//Deklarasi Variabel
	koordinat A,B,C;
	float a,b,c; // panjang sisi
	float X,Y,Z;


    // Meminta masukan koordinat
    printf("Masukkan koordinat A :\n");
    scanf ("%d %d %d",&A.x,&A.y,&A.z);
    printf("Masukkan koordinat B :\n");
    scanf ("%d %d %d",&B.x,&B.y,&B.z);
    printf("Masukkan koordinat C :\n");
    scanf ("%d %d %d",&C.x,&C.y,&C.z);

    a=sqrt((C.x-B.x)*(C.x-B.x) + (C.y-B.y)*(C.y-B.y) + (C.z-B.z)*(C.z-B.z));
    b=sqrt((A.x-C.x)*(A.x-C.x) + (A.y-C.y)*(A.y-C.y) + (A.z-C.z)*(A.z-C.z));  // perhitungan jarak antar titik
    c=sqrt((B.x-A.x)*(B.x-A.x) + (B.y-A.y)*(B.y-A.y) + (B.z-A.z)*(B.z-A.z));

    X = sudutCalc(a,b,c);
    Y = sudutCalc(b,c,a);          //perhitungan sudut dengan sifat segitiga
    Z = sudutCalc(c,a,b);

    // Menampilkan sudut pada segitiga
    printf("Sudut yang dibentuk koordinat A-B-C adalah %.3f derajat\n",Y);
    printf("Sudut yang dibentuk koordinat B-A-C adalah %.3f derajat\n",X);
    printf("Sudut yang dibentuk koordinat A-C-B adalah %.3f derajat\n",Z);

    return 0;
}


float sudutCalc (float x, float y, float z){      //fungsi perhitungan sudut
    float D,X,N;          // variable lokal
    N = (y*y + z*z - x*x);
    D = (2.0*y*z);
    X = (180/pi)*acos(N/D);         //proses sudut
    return X;
}
