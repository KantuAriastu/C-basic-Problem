// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 6
// Percobaan : 3 TP
// Tanggal : 1 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem3.c
// Deskripsi : menginput dua buah nama dan menampilkan nama tengah belakang dan depan keduanya
#include <stdio.h>

int main()
{
    char nama1[31];  //deklrasi variable
    char nama2[31];
    char depan[31];
    char belakang[31];
    char tengah[31];

    int i,j,last;

    //algoritma
    printf("Masukkan nama ke1 :\n");            //meminta input
    fgets ( nama1,31, stdin );
    printf("Masukkan nama ke2 :\n");
    fgets ( nama2,31, stdin );

    for ( i = 0; i <= 31 ; i++ )
{
    if ( nama1[i] == ' ' ){      //proses parsing nama 1
        depan[i]='\0';
        last = i+1;
        break;
    } else if ( nama1[i] != ' ')
    {
        depan[i]=nama1[i];
    }
}
    j=0;
 for ( i = last; i <= 31 ; i++ )
{
    if ( nama1[i] == ' ' ){
        tengah[j]='\0';
        last = i+1;
        break;
    } else if ( nama1[i] != ' ')
    {
       tengah[j]=nama1[i];
       j++;
    }
}
   j=0;
 for ( i = last; i <= 31 ; i++ )
{
    if ( nama1[i] == ' ' ){
        belakang[j]='\0';
        last = i+1;
        break;
    } else if ( nama1[i] != ' ')
    {
       belakang[j]=nama1[i];
       j++;
    }
}
     printf ( "Nama Depan 1    : %s\n",depan );    //menampilkan nama 1
     printf ( "Nama Tengah 1   : %s\n",tengah );
     printf ( "Nama Belakang 1 : %s\n",belakang );



      for ( i = 0; i <= 31 ; i++ )      //parsing nama kedua
{
    if ( nama2[i] == ' ' ){
        depan[i]='\0';
        last = i+1;
        break;
    } else if ( nama2[i] != ' ')
    {
        depan[i]=nama2[i];
    }
}
    j=0;
 for ( i = last; i <= 31 ; i++ )
{
    if ( nama2[i] == ' ' ){
        tengah[j]='\0';
        last = i+1;
        break;
    } else if ( nama2[i] != ' ')
    {
       tengah[j]=nama2[i];
       j++;
    }
}
   j=0;
 for ( i = last; i <= 31 ; i++ )
{
    if ( nama2[i] == ' ' ){
        belakang[j]='\0';
        last = i+1;
        break;
    } else if ( nama2[i] != ' ')
    {
       belakang[j]=nama2[i];
       j++;
    }
}
     printf ( "Nama Depan 2    : %s\n",depan );     //menampilkan nama kedua
     printf ( "Nama Tengah 2   : %s\n",tengah );
     printf ( "Nama Belakang 2 : %s",belakang );

    return 0;
}
