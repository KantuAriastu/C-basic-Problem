// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 3
// Percobaan : 2
// Tanggal : 23 February 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem2.c
// Deskripsi : menampilkan selisih hari antara sua tanggal


#include <stdio.h>

int main (void)
{
	// Deklarasi Variabel
	int M1, D1;
	int M2, D2;
    int hari;

	// Algoritma
    printf("Masukkan Tanggal Pertama (MM DD):\n");
    scanf("%d %d",&M1,&D1);
    printf("Masukkan Tanggal Kedua (MM DD):\n");
    scanf("%d %d",&M2,&D2);

    if ((M1<8)&&(M1 % 2!=0)){ //inisialisasi nilai hari dengan tanggal pada bulan 1
        hari = 31-D1+1;
    }
    else if ((M1<8)&&(M1 % 2==0)&&(M1!=2)){
        hari = 30-D1+1;
    }
    else if ((M1<8)&&(M1==2)){
        hari = 28-D1+1;
    }
    else if ((M1>=8)&&(M1 % 2==0)){
        hari = 31-D1+1;
    }
    else if ((M1>=8)&&(M1 % 2!=0)){
        hari = 30-D1+1;
    }
    M1=M1+1; //percabangan untuk menambahkan nilai hari sampai bulan kedua
    while (M1<M2){
        if ((M1<8)&&(M1 % 2!=0)){
            hari = hari+31;
        }
        else if ((M1<8)&&(M1 % 2==0)&&(M1!=2)){
            hari = 30+hari;
        }
        else if ((M1<8)&&(M1==2)){
            hari = 28+hari;
        }
        else if ((M1>=8)&&(M1 % 2==0)){
            hari = 31+hari;
        }
        else if ((M1>=8)&&(M1 % 2!=0)){
            hari = 30+hari;
        }
        M1=M1+1;
    }
    if (M1==M2){ //jika sudah sama makaa nilai tangal bulan kedua ditambahkan
        hari=hari+D2;
    }
    printf("Jumlah Hari: %d\n",hari); //menampilkan beda hari

	return 0;
}
