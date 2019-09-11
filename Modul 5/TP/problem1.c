// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul : 5
// Percobaan : 0 TP
// Tanggal : 1 Maret 2016
// Nama (NIM) : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File : problem1.c
// Deskripsi : menginput suatu deret bilangan pada array dan menuliskan banyak bilangan yang di minta

#include <stdio.h>1

int main(){
   int arrayin [10];  //deklrasi variable
   int i,k,temp,j;

    //algoritma
    printf("Masukkan 10 bilangan integer :\n"); //input array
    for (i=0;i<=9;i++){
        scanf("%d",&arrayin[i]);
   }
    for (i=0;i<=9;i++){
        k = i;
        for (j = i+1;j<=9;j++){
            if (arrayin[j] < arrayin[k]){
                k = j;
                temp=arrayin[i];
                arrayin[i]=arrayin[k];
                arrayin[k]=temp;
            }
        }
    }

   for (i=0;i<=9;i++){
       printf("%d\n",arrayin[i]);
   }


	return 0;
}
