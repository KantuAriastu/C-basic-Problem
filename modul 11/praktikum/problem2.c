/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 11
 * Percobaan      : 1
 * Tanggal        : 5 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem2.c
 *
 * Deskripsi      : program dengan structure data stuck yang akan mengenkripsikan 8byte binary
 *                   menjadi 2 byte hexadecimal
*/
#include <stdio.h>

typedef struct stack {//structure data stacktype
    int A[8];
    int Top;
}stack;

void pop ();
void push (int x);
void map_bin_to_hex(char *c);

stack stack1;

int main(void)
{   //DEKLARASI VARIABLE
    int i,j;
    int x;
    char hex[5];
    stack1.Top=-1;
    hex[4]='\n';

    for(i=0;i<8;i++){
        printf("Input biner ke-%d : \n",i); //membaca stack
        scanf("%d",&x);
        push(x);
    }
    printf("Hasil : ");
    j=0;
    for (i=7;i>=4;i--) {            //pengambilan 4 byte
        hex[j]=stack1.A[i]+'0';
        j++;
    }
    map_bin_to_hex(hex);    //konversi
    j=0;
    for (i=3;i>=0;i--) {
        hex[j]=stack1.A[i]+'0';
        j++;
    }
     map_bin_to_hex(hex);
     printf("\n");

	return 0;
}
void pop(){//prosedur pop stack
    stack1.Top= stack1.Top-1;
}
void push (int x){ //prosedur push
    stack1.Top = stack1.Top+1;
    stack1.A[stack1.Top]=x;
}

 void map_bin_to_hex(char *c) //konversi ke hexadecimal
   {
        char hexMap[] =
        {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

        int index = strtoull(c, NULL, 2);
        printf("%c", hexMap[index]);
   }
