/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 9
 * Percobaan      : 0 (TP 3)
 * Tanggal        : 28 Maret 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem3.c
 *
 * Deskripsi      : Program menerima input orde matriks kemudian apabila kedua matriks
 *                  dapat dikalikan maka program akan menerima input data dan menampilkan keduda
 *                  matrix beserta hasil perkaliannya.
 */


#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//Deklarasi Variable
	int b1,k1,b2,k2;
	int **mat1,**mat2,**res;
	int i,j,k;

	//Input Orde Matriks
    printf("Masukkan orde matriks pertama :\n");
    scanf("%d %d",&b1,&k1);
    printf("Masukkan orde matriks kedua :\n");
    scanf("%d %d",&b2,&k2);

    //Cek Orde Matriks
    if(k1 != b2)
	{
		printf("Orde matriks yang dimasukkan salah!\n");
		return 0;
	}else{
	//Alokasi Memori
	mat1= (int**) malloc(b1*sizeof(int*));
    for(i=0;i<b1;i++) {
        mat1[i]=(int*)malloc(k1*sizeof(int));
	}
	mat2= (int**) malloc(b2*sizeof(int*));
    for(i=0;i<b2;i++) {
        mat2[i]=(int*)malloc(k2*sizeof(int));
	}
	res= (int**) malloc(b1*sizeof(int*));
    for(i=0;i<b1;i++) {
        res[i]=(int*)malloc(k2*sizeof(int));
	}


	//Input Nilai matriks pertama
	for(i=0; i<b1; i++)
			for(j=0; j<k1; j++)
			{
				printf("Masukkan elemen (%d, %d) dari matriks pertama :\n", j, i);
				scanf("%d", &mat1[i][j]);
			}

	//Input Nilai matriks kedua
    for(i=0; i<b2; i++)
			for(j=0; j<k2; j++)
			{
				printf("Masukkan elemen (%d, %d) dari matriks kedua :\n", j, i);
				scanf("%d", &mat2[i][j]);
			}
    for(i=0; i<b1; i++) //Proses Prrkalian
			for(j=0; j<k2; j++)
			{
				res[i][j] = 0;
				for(k=0; k<b2; k++)
					res[i][j] = res[i][j] + mat1[i][k] * mat2[k][j];
			}
        //Cetak Matriks Pertama
		printf("Matriks pertama :\n");
		for(i=0; i<b1; i++)
			for(j=0; j<k1; j++)
				if(j!=k1-1)
					printf("%d\t", mat1[i][j]);
				else
					printf("%d\n", mat1[i][j]);

		//Cetak Matriks kedua
		printf("Matriks kedua :\n");
		for(i=0; i<b2; i++)
			for(j=0; j<k2; j++)
				if(j!=k2-1)
					printf("%d\t", mat2[i][j]);
				else
					printf("%d\n", mat2[i][j]);

		//Cetak Matriks hasil perkalian
		printf("Hasil perkalian matriks :\n");
		for(i=0; i<b1; i++)
			for(j=0; j<k2; j++)
				if(j!=k2-1)
					printf("%d\t", res[i][j]);
				else
					printf("%d\n", res[i][j]);

		for(i=0; i<b1; i++)
			free(mat1[i]);
		free(mat1);
		for(i=0; i<b2; i++)
			free(mat2[i]);
		free(mat2);
		for(i=0; i<b1; i++)
			free(res[i]);
		free(res);
		return 0;
	}
}
