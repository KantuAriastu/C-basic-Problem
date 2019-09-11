/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 13
 * Percobaan      : 2
 * Tanggal        : 12 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem2.c
 *
 * Deskripsi      : Program yang akan menerima nBanyak titik 2 vektor dan kemudian melakukan dotProduct nya
*/
#include <stdio.h>
#include<stdlib.h>

// TYPE DEFINE
typedef struct node{
    float data;
    int indeks;
    struct node* link;
} node;

//MAIN PROGRAM
int main (){
    //VARIABLE DEFINE
    node* HeadA;
    node* HeadB;
    node* processA = (node*) malloc (sizeof(node));
    node* processB = (node*) malloc (sizeof(node));
    int i,n;
    float x,sum;
    int ind;

    //PROSES INPUT DATA A
    HeadA=processA;                                         //inisialisasi Head
    printf("Jumlah anggota list A : \n");
    scanf("%d",&n);                                         //membaca banyak data
    for ( i=1 ; i<=n ; i++ )
    {
        printf("Masukkan index pada list A : \n");
        scanf("%d",&ind);                                   //membaca data indeks
        processA->indeks=ind;
        printf("Masukkan value pada index tersebut : \n");
        scanf("%f",&x);
        processA->data=x;
        if (i!=n)
        {
            processA->link=(node*) malloc (sizeof(node));   //berpindah ke next node
            processA=processA->link;
        }
        else
        {
            processA->link = NULL;                          //memberi null pada node terakhir
        }
    }

    //PROSES INPUT DATA B
    HeadB=processB;                                         //inisialisasi head
    printf("Jumlah anggota list B : \n");
    scanf("%d",&n);                                         //membaca banyak data
    for ( i=1 ; i<=n ; i++ )
    {
        printf("Masukkan index pada list B : \n");
        scanf("%d",&ind);                                   //membaca indeks dan data
        processB->indeks=ind;
        printf("Masukkan value pada index tersebut : \n");
        scanf("%f",&x);
        processB->data=x;
        if (i!=n)
        {
            processB->link=(node*) malloc (sizeof(node));   //berpindah ke next node
            processB=processB->link;
        }
        else
        {
            processB->link = NULL;                          //memberi null pada node terkahir
        }
    }

    //PROSES DOT PRODUCT
    sum=0;
    for (processA=HeadA;processA!=NULL;processA=processA->link)                 //cek satu satu
    {
        for (processB=HeadB;processB!=NULL;processB=processB->link)
        {
            if (processA->indeks == processB->indeks)                   //apabila indeks sama dikali dan dimasukkan pada sum
            {
                sum += (processA->data)*(processB->data);
            }
        }
    }

    //OUTPUT
    printf("Hasil dotproduct dari kedua vektor = %.2f\n", sum);
    return 0;
    }


