// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 6
// Percobaan : 4
// Tanggal : 4 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem4.c
// Deskripsi : Membalik tulisan tiap kata dari kalimat

#include <stdio.h>

int main(){
    char kal[100]; //deklarasi variable
    char temp[30];
    int last,j,i,nmax;

    //algoritma
    printf("Masukkan kalimat :\n");  //meminta input
    fgets ( kal,100, stdin );


    printf("Kalimat setelah dibalik urutan karakter :\n");
    j=0;
    for ( i = 0; i <= 100 ; i++ )
{
    if (( kal[i] == ' ')||( kal[i] == '\n')){      //proses parsing kalimat dimasukkan pada temp
        last=i;
        for ( j = nmax; j >= 0 ; j-- ){           //proses print kata dari belakang
            printf("%c",temp[j]);
        }
        if (kal[i]!='\n'){
            printf(" ");
        }
        i=last;                                     //inisialisasi ulang i
        j=0;                                        //inisialisasi ulang j

    } else if ((kal[i]!=' ')||( kal[i]!='\n'))          //proses pemindaghan parsing ke temp
    {
       temp[j]=kal[i];
        nmax=j;
       j++;

    }
    if (kal[i]=='\n'){
        break;
    }
}
    printf("\n");

    return 0;
}

