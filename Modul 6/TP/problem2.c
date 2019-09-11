// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 6
// Percobaan : 2 TP
// Tanggal : 4 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem2.c
// Deskripsi : Menginput 4 buah nama dan menampilkan pada layar

#include <stdio.h>

int main()
{
    char nama1[20]; //deklarasi variable
    char nama2[20];
    char nama3[20];
    char nama4[20];
    int i;

    //algoritma
    printf("Masukkan nama ke1 :\n");  //meminta input
    fgets ( nama1,21, stdin );
    printf("Masukkan nama ke2 :\n");
    fgets ( nama2,21, stdin );
    printf("Masukkan nama ke3 :\n");
    fgets ( nama3,21, stdin );
    printf("Masukkan nama ke4 :\n");
    fgets ( nama4,21, stdin );

    for ( i = 0; i < 21 ; i++ )   //proses pemberian \0 pada ujung kalimat pada array
{
    if ( nama1[i] == '\n' )
    {
        nama1[i] = '\0';
        break;
    }
}

   for ( i = 0; i < 21 ; i++ )
{
    if ( nama2[i] == '\n' )
    {
        nama2[i] = '\0';
        break;
    }
}

   for ( i = 0; i < 21 ; i++ )
{
    if ( nama3[i] == '\n' )
    {
        nama3[i] = '\0';
        break;
    }
}

   for ( i = 0; i < 21 ; i++ )
{
    if ( nama4[i] == '\n' )
    {
        nama4[i] = '\0';
        break;
    }
}

    printf("%-30s1\n",nama1);       //menampilkan output
    printf("%-30s2\n",nama2);
    printf("%-30s3\n",nama3);
    printf("%-30s4\n",nama4);

    return 0;
}
