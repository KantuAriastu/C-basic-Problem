// Praktikum EL2208 Pemecahan Masalah dengan C
// Modul          : 8
// Percobaan      : 1
// Tanggal        : 11 Maret 2016
// Nama (NIM)     : Ngakan Putu Ariastu Krisnadi Rata (13214137)
// Nama File      : problem1.c
// Deskripsi      : menginput banyak bilangan sesuai keinginan user dan mengurutkan bilangan tersebut

#include <stdio.h>

int bil[1000001];   //variable global

// Deklarasi prosedur
void UrutBil (int n);

int main(void){
    int i,n;  // deklarasi variable

    //ALGORITMA
	printf("Masukkan banyaknya bilangan (n) :\n");
	scanf("%d",&n);                                         //Membaca banyak nya input
	for ( i = 0; i < n; i++){
        printf("Masukkan bilangan ke - %d :\n",i+1);          //membaca bilangan yang input
        scanf("%d",&bil[i]);
	}
	UrutBil(n);                                         //memanggil prosedur prngurutan bilangan
	printf("Hasil pengurutan bilangan :\n");                //menuliskan hasil pengurutan pada array sama
	for ( i = 0; i < n; i++ ){
        printf("%d",bil[i]);
        printf("\n");
}

	return 0;
}

// Definisi prosedur
    void UrutBil (int n){
    int i,j;            //variable lokal
    int temp;

    for (i = 0; i < n-1; i++) {   //pengururan bubble
            for( j = 0 ; j < n-1-i; j++){
                if (bil[j]<=bil[j+1]){
                    temp = bil[j];
                    bil[j]=bil[j+1];
                    bil[j+1]=temp;
                }
            }
    }
  }

