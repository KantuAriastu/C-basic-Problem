// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 3
// Percobaan : 1
// Tanggal : 23 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem1.c
// Deskripsi : menampilkan status indeks masa tubuh sesuai inputan user

#include <stdio.h>

int main (void)
{
	// Deklarasi Variabel
    int massa;
    int tinggi;
    float BMI;
	// Algoritma
	printf("Masukkan massa badan (lb):\n"); //membaca input
	scanf("%d",&massa);
	printf("Masukkan tinggi badan (inch):\n");
	scanf("%d",&tinggi);
	BMI = (massa/(tinggi*tinggi))*703 ; //proses BMI
	if (BMI<18.5){
        printf("Anda kurus\n"); //percabangan sesuai MBI dan menampilkan statusnya
	}
	else if ((BMI>=18.5)&&(BMI<24.9)){
        printf("Anda normal\n");
	}
	else if ((BMI>=24.9)&&(BMI<29.9)){
	printf("Anda gemuk\n");
	}
    else if (BMI>=29.9){
	printf("Anda obesitas\n");
    }

	return 0;
}
