/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 9
 * Percobaan      : 1
 * Tanggal        : 29 Maret 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      : menghitunng hasil konvolusi dua sinyal linear dan sirkular
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{   int *sig1, *sig2, *kon,*sir;
    int n,m,pos1,pos2;
    int i,j,l,k,ic;

	printf("Masukkan jumlah angka konvolusi 1 : \n"); //input sinyal 1
	scanf ("%d",&m);
	sig1 = (int*)calloc(m,sizeof(int));
    for (i=0;i<m;i++){
        printf("Masukkan nilai konvolusi 1 ke-%d : \n",i);
        scanf("%d",&sig1[i]);
    }
    printf("Masukkan titik nol konvolusi 1 : \n");
    scanf("%d",&pos1);

    printf("Masukkan jumlah angka konvolusi 2 : \n");    //input sinyal2
	scanf ("%d",&n);
	sig2 = (int*)calloc(n,sizeof(int));
    for (i=0;i<n;i++){
        printf("Masukkan nilai konvolusi 2 ke-%d : \n",i);
        scanf("%d",&sig2[i]);
    }
    printf("Masukkan titik nol konvolusi 2 : \n");
    scanf("%d",&pos2);

    kon=(int*)malloc((m+n-1)*sizeof(int));      //alokasi emmeori
     for (i = m; i < m+n-1; i++){
            sig1[i] = 0;
        }
    for (i = n; i < m+n-1; i++)
    {
        sig2[i] = 0;
    }
    /* Operasi */
    for (i = 0; i < m+n-1; i++)
    {
        kon[i] = 0;
        for (j = 0; j <= i; j++)
        {
            kon[i] = kon[i] + sig1[j]*sig2[i-j];
        }
    }

     printf("**Konvolusi Linear**\n"); //proses linier
     printf("n\t\ty(n)\n");
     for(i=0;i<m+n-1;i++){
            printf("%d\t\t%d\n",i-pos1,kon[i]);
     }
    printf("Masukkan panjang konvolusi sirkuler : \n");
    scanf("%d",&l);

    sir = (int*)calloc(l, sizeof(int));
    for (i = 0; i <m +n-1; i++)
    {
        if ((i-pos1) >= 0)
        {
            ic=(i-pos1)%l;
        }
        else
        {
            ic=(l-abs(i-pos1))%l;
        }
        if (ic==0)
        {
            sir[0]=sir[0]+kon[i];
        }
        else
        {
            sir[ic]=sir[ic]+kon[i];
        }
    }

    /* Menampilkan keluaran konvolusi sirkuler */
    printf("**Konvolusi Sirkuler dengan panjang %d**\n", l);
    printf("n\t\ty(n)\n");
    for (i=0;i<l;i++)
    {
        printf("%d\t\t%d\n", i, sir[i]);
    }


  return 0;
}
