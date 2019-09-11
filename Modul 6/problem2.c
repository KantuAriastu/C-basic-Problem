// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 6
// Percobaan : 2
// Tanggal : 4 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem2.c
// Deskripsi : menginput suatu kalimat dan kata dan mengecek apakah kata ada didalam kalimat

#include <stdio.h>

int main(){
    char kal[100]; //deklarasi variable
    char kata[30];
    int i,j;
    int pres;
    int pos;

    //algoritma
    printf("Masukkan kalimat :\n");  //meminta input
    fgets ( kal,100, stdin );
    printf("Masukkan kata yang dicari :\n");  //meminta input
    fgets ( kata,30, stdin );

    for ( i = 0; i <= 100 ; i++ )   //proses pemberian \0 pada ujung kalimat pada array
{
    if ( kal[i] == '\n' )
    {
       kal[i] = '\0';
        break;
    }
}
 for ( i = 0; i <= 30 ; i++ )   //proses pemberian \0 pada ujung kalimat pada array
{
    if ( kata[i] == '\n' )
    {
        kata[i] = '\0';
        break;
    }
}

    pos=999;  //menentukan posisi huruf awal yg sama
    for (i=0;i<=100;i++){
        if ((kal[i]==kata[0])&&(kal[i+1]==kata[1])&&(kal[i+2]==kata[2])){
            pos=i;
            break;
        } else if (kal[i]=='\n'){
            break;
        } else if (kal[0]==kata[0]){
            pos=0;
        }
    }


    pres=1;
    if (pos == 999){   //percabangan bergantung pada posisi huruf yg sama
            pres=0;
    } else if (pres!=999) {
        j=0;
        for (i=pos;i<=100;i++){  //apabila ada huruf awal yg sama dicek kata tersebut
            if (kal[i]!=kata[j]&&(kata[j]!='\0')){
                pres=0;
                break;
            }
            if (kata[j]=='\0'){
                break;
            }
            j++;
        }
    }

    if (pres==0){  //pemberian output
        printf("Kata %s tidak ada didalam kalimat \"%\s\"\n",kata,kal);
    }else if (pres==1){
         printf("Kata %s ada didalam kalimat \"%s\"\n",kata,kal);
    }

    return 0;
}
