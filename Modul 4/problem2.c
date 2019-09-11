// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 4
// Percobaan : 2
// Tanggal : 26 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem2.c
// Deskripsi : meminta input angka smpai diinput 9999 dan menampilkan rata2

#include <stdio.h>
int main(){
        int in,data;  //deklrasai variable
        int count;
        float mean;

        count=0;
        data=0;
        while (in!=9999){  //pengulangan permintaan input
            printf("Masukkan nilai integer :\n");
            scanf("%d",&in);
            if (in!=9999) {
                data=data+in;
                count=count+1;
            }
        }
        if (count>0){
            mean = (float)data/(float)count; //percabangan apabila tidak ada input
        }
        else {
            mean=0;
        }


		printf("Rata-rata dari %d bilangan tersebut adalah %.2f\n",count,mean);
        return 0;
}
