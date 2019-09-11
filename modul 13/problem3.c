/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 13
 * Percobaan      : 3 (TP)
 * Tanggal        : 11 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem3.c
 *
 * Deskripsi      : Program yang akan menerima 3 buah input data dan meletakkannya pada linked list dan kemudian mencetak ulang
 *                  data sesuai urutan input. kemudian ditambahkan data ke 4 dan diletakkan pada nth data sesuai keinginan
 *                  kemudian linked list kembali dicetak.
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
    node* Head;
    node* process = (node*) malloc (sizeof(node));
    node* temp = (node*) malloc (sizeof(node));
    int i,pos;
    int x;

    //PROSES INPUT DATA
    Head=process;
    for ( i=1 ; i<=3 ; i++ )
    {
        printf("Masukkan nilai pada linked list : \n");
        scanf("%d",&x);
        process->data=x;
        if (i!=3)
        {
            process->link=(node*) malloc (sizeof(node));
            process=process->link;
        }
        else
        {
            process->link = NULL;
        }
    }
    //PROSES OUTPUT LAYAR
    process=Head;
    printf("Linked list yang dimasukkan : \n");
    while (process!=NULL)
    {
        printf("%d ",process->data);
        process=process->link;
    }
    printf("\n");

    //PROSES INPUT DATA TAMBAHAN
    printf("Masukkan nilai yang akan ditambahkan : \n");
    scanf("%d",&x);
    temp->data=x;
    temp->link=NULL;
    printf("Masukkan urutan : \n");
    scanf("%d",&pos);
    process= Head;
    if (pos==1)
    {
        temp->link = process;
        Head = temp;
    }
    else
    {
        for ( i=0 ; i < pos-2 ; i++)
        {
            process=process->link;
        }
        temp->link = process->link;
        process->link=temp;
    }

    //PROSES OUTPUT LAYAR
    process=Head;
    printf("Linked list setelah ditambahkan : \n");
    while (process!=NULL)
    {
        printf("%d ",process->data);
        process=process->link;
    }
    printf("\n");
    return 0;
    }


