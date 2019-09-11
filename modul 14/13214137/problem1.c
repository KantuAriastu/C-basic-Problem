/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 14
 * Percobaan      : 1
 * Tanggal        : 15 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu Krisnadi Rata (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      : program yang meminta salah satu metode integral rieaman yang digunakan kemudian
 *                  memilih fungsi yang akan diintegra, memasukkan batas dan banyaknya partisi
 *                  kemudian programa akan menghasilkan hasil integral
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "problem1lib.h" //memanggil librray yang telah dibuat

int main(void)
{
	//DEKLARASI VARIABLE
	int method;
	char m[17];
	int f;
	char func[8];
	int a, b, n;
	double result;

	//MEMBACA PILIHAN METODE
    printf("1. Left Rectangle\n");
    printf("2. Right Rectangle\n");
    printf("3. Middle Rectangle\n");
    printf("4. Trapezoidal Rule\n");
    printf("5. Simpson's Rule\n");
    printf("Masukkan jenis Riemann Sum yang ingin digunakan : \n");
	scanf("%d", &method);
	switch(method)  //menyimpan metode dalam string untuk diprint
	{
		case 1 :
			strcpy(m, "Left Rectangle");
			break;
		case 2 :
			strcpy(m, "Right Rectangle");
			break;
		case 3 :
			strcpy(m, "Middle Rectangle");
			break;
		case 4 :
			strcpy(m, "Trapezoidal Rule");
			break;
		case 5 :
			strcpy(m, "Simpson's Rule");
			break;
	}

    //MEMBACA FUNGSI YANG DIPILIH
    printf("1. f(x)=(x-1)^2\n");
    printf("2. f(x)=1/x\n");
	printf("3. f(x)=2^x\n");
    printf("Masukkan pilihan fungsi : \n");
	scanf("%d", &f);
	switch(f) //menyimpan fungsi dalam string untuk diprint
	{
		case 1 :
			strcpy(func, "(x-1)^2");
			break;
		case 2 :
			strcpy(func, "1/x");
			break;
		case 3 :
			strcpy(func, "2^x");
			break;
	}

    //MEMBACA BATAS DAN BANYAK PARTISI
    printf("Masukkan nilai ambang batas bawah : \n");
	scanf("%d", &a);
    printf("Masukkan nilai ambang batas atas : \n");
	scanf("%d", &b);
    printf("Masukkan jumlah partisi n : \n");
	scanf("%d", &n);

	//proses integral dengan memanggil fungsi pada problem1lib.h
	switch(method)
	{
		case 1 :
			result = lRect(a, b, n, f);
			break;
		case 2 :
			result = rRect(a, b, n, f);
			break;
		case 3 :
			result = mRect(a, b, n, f);
			break;
		case 4 :
			result = tRule(a, b, n, f);
			break;
		case 5 :
			result = sRule(a, b, n, f);
			break;
	}

	//Output
    printf("Nilai integral dari %s dengan menggunakan metode %s adalah %.3f\n", func, m, result);

	//End Program
    return 0;
}
