/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 12
 * Percobaan      : 0 (TP)
 * Tanggal        : 8 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      :
*/
#include <stdio.h>
#include<stdlib.h>




//MAIN PROGRAM
int main ()
{
    int  c[12];
    int i,j;
    int a[6]={3,4,5,2,6,5};
    int b[6]={6,5,4,3,2,1};
    for (i=0;i<=11;i++)
    {
        c[i]=0;
    }
    int pos = 1;
    for (j=0;j<=5;j++)
    {
        for(i=0;i<=5;i++)
        {
            c[pos+i]+=a[i]*b[j];
        }
        pos++;
    }
    for (i=0;i<=11;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    for (i=11;i>=0;i--)
    {
        c[i-1]+=c[i]/10;
        c[i]=c[i]%10;
    }
    for (i=0;i<=11;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}

