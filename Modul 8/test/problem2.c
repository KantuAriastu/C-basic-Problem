// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul          : 8
// Percobaan      : 2
// Tanggal        : 11 Maret 2016
// Nama (NIM)     : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File      : problem2.c
// Deskripsi      : menghitung BMI user dengan inputan tinggi dan berat badanya , lalu menentukan status tubuhnya (overweight dll)

#include <stdio.h>

// Deklarasi Fungsi
float BMIcalc (float w, float h);

int main(){
    float height,weight;    //deklarasi variable
    float z;


    //ALGORITMA
    printf("Kalkulator Berat Badan Ideal BMI\n");
	printf("Masukkan tinggi badan anda ( Meter ):\n");          //meminta input tinggi
	scanf("%f",&height);
	printf("Masukkan berat badan anda ( Kilogram ):\n");            //meminta input berat
	scanf("%f",&weight);
    z=BMIcalc(weight,height);               //proses BMI dengan pemanggilan fungsi disimpan di z
    if (z < 18){                    //percabangan sesuai hasil perhitungan BMI (Z)
        printf("BMI = %.2f, Under Weight\n",z);
    }
    if ((z < 26)&&(z >= 18)){
        printf("BMI = %.2f, Normal Weight\n",z);
    }
      if ((z < 28)&&(z >= 25)){
        printf("BMI = %.2f, Over Weight\n",z);
      }
      if (z >= 28){
         printf("BMI = %.2f, Obese\n",z);
    }
	return 0;
}

// Deklarasi
float BMIcalc (float w, float h){   //fungsi dengan input tinggi dan berat
    float R;
    R = w/(h*h);                //proses
    return R;                   //mengembalikan nilai R dari proses
}

