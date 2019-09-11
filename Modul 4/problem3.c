// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 4
// Percobaan : 3
// Tanggal : 26 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem3.c
// Deskripsi : meminta input angka smpai diinput 9999 dan menampilkan rata2

#include <stdio.h>
int main(){
   int in,data; //deklrasi variable
        int count;
        float mean;

        count=0; //algoritma
        data=0;
        while (in!=9999){
            printf("Masukkan nilai integer :\n"); //meminta masukan
            scanf("%d",&in);
            if ((in!=9999)&&(in>100)&&(in<200)) { //batas input
                data=data+in;
                count=count+1;
            }
            else if ((in<100)||(in>200)&&(in!=9999)){
                printf("Input harus berada pada rentang 100-200!\n");
            }
        }
        if (count>0){
            mean = (float)data/(float)count; //percabangan apabila tidak ada input angka
        }
        else {
            mean=0;
        }
		printf("Rata-rata dari %d bilangan tersebut adalah %.2f\n",count,mean);
        return 0;
}
