/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 13
 * Percobaan      : 2 (TP)
 * Tanggal        : 11 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem2.c
 *
 * Deskripsi      : Program yang akan menerima 2 buah input linked list dan menggabungkan keduanya dan kemudian mencetak
 *                  hasil merge tersebut
*/
#include <stdio.h>
#include<stdlib.h>

// TYPE DEFINE
typedef struct node{
    int data;
    struct node* link;
} node;

//MAIN PROGRAM
int main (){
    //VARIABLE DEFINE
    node* HeadA;
    node* HeadB;
    node* process;
    node* processA = (node*) malloc (sizeof(node));
    node* processB = (node*) malloc (sizeof(node));
    int x;
    int i;

    //PROSES INPUT DATA A
    HeadA = processA;
    do
    {
        printf("input A : \n");
        scanf("%d",&x);
        if (i!=9999)
        {
            processA->data=x;
            processA->link=(node*) malloc (sizeof(node));
            processA=processA->link;
        }
        else
        {
            processA->link = NULL;
        }
    }while(x!=9999)
    //PROSES INPUT DATA B
    HeadB=processB;
    for ( i=1 ; i<=4 ; i++ )
    {
        printf("input B : \n");
        scanf("%d",&x);
        processB->data=x;
        if (i!=4)
        {
            processB->link=(node*) malloc (sizeof(node));
            processB=processB->link;
        }
        else
        {
            processB->link = NULL;
        }
    }
    //MENGGABUNGKAN LIST
    processA->link = HeadB;

    //PROSES OUTPUT LAYAR
    process=HeadA;
    printf("Linked list gabungan A dan B yang dimasukkan : \n");
    while (process!=NULL)
    {
        printf("%d ",process->data);
        process=process->link;
    }
    printf("\n");
    return 0;
    }


