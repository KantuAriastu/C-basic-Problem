// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 6
// Percobaan : 3
// Tanggal : 4 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem3.c
// Deskripsi : Mengecek kata input palindrom atau bukan

#include <stdio.h>


int main(){
    char kata[30]; //deklarasi variable
    int i,j;
    int isPalindrom,nmax;

    //algoritma
    printf("Masukkan kata :\n");  //meminta input
    fgets ( kata,30, stdin );

    for ( i = 0; i <= 30 ; i++ )   //proses pemberian \0 pada ujung kalimat pada array
{
    if ( kata[i] == '\n' )
    {
        kata[i] = '\0';
        nmax=i-1;                  //mencari nilai narray terakhir yang memuat huruf
        break;
    }
}
    isPalindrom =1;
    j=nmax;
    for (i=0;i<=30;i++){
        if ((kata[i]!=kata[j]&&(j>0))){   //loop buat pengecekan kata
            isPalindrom=0;                  //satu dimulai dari 0++ , satu lagi dari belakang (nmax--)
            break;
        }
        if (kata[i]=='\0'){
            break;
        }
        j--;
    }
    if (isPalindrom==0){
        printf("Kata \"%s\" bukan palindrom\n",kata);   //pemberian output
    }else if (isPalindrom==1){
         printf("Kata \"%s\" palindrom\n",kata);
    }
    return 0;
}
