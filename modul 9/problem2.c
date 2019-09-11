/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 9
 * Percobaan      : 1
 * Tanggal        : 29 Maret 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      : Program yang meminta jumlah elemen yang akan diinput kemudian menerima
 *                  data sebanyak yang diminta dan menampilkan urutan secara ascending
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{   int *sig1, *sig2, *kon,*sir;
    int n,m,pos1,pos2;

	printf("Masukkan jumlah angka konvolusi 1 :\n");
	scanf ("%d",&n);
	sig1 = (int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++){
        printf("Masukkan nilai konvolusi 1 ke-%d :\n",i);
        scanf("%d",&sig1[i]);
    }
    printf("Masukkan titik nol konvolusi 1 :\n");
    scanf("%d",&pos1);

    printf("Masukkan jumlah angka konvolusi 2 :\n");
	scanf ("%d",&m);
	sig2 = (int*)malloc(m*sizeof(int));
    for (i=0;i<m;i++){
        printf("Masukkan nilai konvolusi 1 ke-%d :\n",i);
        scanf("%d",&sig2[i]);
    }
    printf("Masukkan titik nol konvolusi 1 :\n");
    scanf("%d",&pos2);




    free(sig1);
    free(sig2);

  return 0;
}
