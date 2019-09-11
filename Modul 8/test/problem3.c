// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul          : 8
// Percobaan      : 3
// Tanggal        : 11 Maret 2016
// Nama (NIM)     : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File      : problem3.c
// Deskripsi      : menginput 3 buah sisi segitiga menghitung sudut-sudutnya , serta luasnya

#include <stdio.h>
#include <math.h>
#define pi 3.141592654

// Deklarasi fungsi dan prosedur
void inputSisi (int* x, int* y, int* z);
float sudutCalc (int x, int y, int z);
float luasCalc (int x, int y, int z);


int main(void){
    int x,y,z;      //deklarasi variable
    float Luas,X,Y,Z;

    //ALGORITMA
    inputSisi(&x,&y,&z);        //pemanggilan prosedur input
    Luas = luasCalc(x,y,z);        //perhitungan sudut dengan pemanggilan fungsi
    X = sudutCalc(x,y,z);
    Y = sudutCalc(y,x,z);          //perhitungan sudut dengan sifat segitiga
    Z = sudutCalc(z,y,x);

    printf("Nilai sudut a : %.3f derajat\n",Y);     //print output
	printf("Nilai sudut b : %.3f derajat\n",X);
	printf("Nilai sudut c : %.3f derajat\n",Z);
	printf("Luas segitiga : %.3f cm2\n",Luas);

	return 0;
}

//Definisi Fungsi dan Prosedur
void inputSisi (int* x, int* y, int* z){    //input dengan parameter pointer untuk menerima input
    printf("Masukkan sisi x :\n");
    scanf("%d",x);
	printf("Masukkan sisi y :\n");
    scanf("%d",y);
	printf("Masukkan sisi z :\n");
	scanf("%d",z);
}
float sudutCalc (int x, int y, int z){      //fungsi perhitungan sudut
    float D,X,N;          // variable lokal
    N = (y*y + z*z - x*x);
    D = (2.0*y*z);
    X = (180/pi)*acos(N/D);         //proses sudut
    return X;
}
float luasCalc (int x, int y, int z){    //fungsi perhitungan luas
    float s,A;
    s = (x+y+z)/2;
    A = sqrt(s*(s-x)*(s-y)*(s-z));          //proses luas
    return A;
}
