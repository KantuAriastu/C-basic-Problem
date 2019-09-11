/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 13
 * Percobaan      : 1
 * Tanggal        : 11 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      : Program yang akan menerima 2 buah input linked list dan menggabungkan keduanya dan mengurutkan dan kemudian mencetak
 *                  hasil urut tersebut
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
    node* tempA,*tempB;
    node* process;
    node* processA = (node*) malloc (sizeof(node));
    node* processB = (node*) malloc (sizeof(node));
    int xData,xBefore,x;
    int i,notSorted,temp;

    //PROSES INPUT DATA A
    HeadA = processA;
    printf("Data list A : \n");
    scanf("%d",&xData);     //inisialisasi data pertama
    if (xData!=9999)
    {
        processA->data=xData;
        processA->link=(node*) malloc (sizeof(node));
        tempA=processA;
        processA=processA->link;
        xBefore=xData;
    }
    else
    {
        HeadA = NULL;       //jika 9999 langsung list A kosong
    }
    while (xData!=9999)     //pembacaan data berikutnya
    {
        printf("Data list A : \n");
        scanf("%d",&xData);
        if ((xData>xBefore)&&(xData!=9999))
        {
            printf("Data yang dimasukkan salah!\n");
        }
        else
        {
            if (xData!=9999)
            {
                processA->data=xData;
                processA->link=(node*) malloc (sizeof(node));
                tempA=processA;
                processA=processA->link;
                xBefore=xData;
            }
            else
            {
                tempA->link = NULL;
            }
        }
    }


    //PROSES INPUT DATA B
    HeadB = processB;   //inisialisasi data pertama
    printf("Data list B : \n");
    scanf("%d",&xData);
    if (xData!=9999)
    {
        processB->data=xData;
        processB->link=(node*) malloc (sizeof(node));
        tempB=processB;
        processB=processB->link;
        xBefore=xData;
    }
    else
    {
        HeadB = NULL;       //jika 9999 maka list kosong
    }
    while (xData!=9999)     //pembacaan data berkutnya
    {
        printf("Data list B : \n");
        scanf("%d",&xData);
         if ((xData>xBefore)&&(xData!=9999))
        {
            printf("Data yang dimasukkan salah!\n");
        }
        else
        {
            if (xData!=9999)
            {
                processB->data=xData;
                processB->link=(node*) malloc (sizeof(node));
                tempB=processB;
                processB=processB->link;
                xBefore=xData;
            }
            else
            {
                tempB->link = NULL;
            }
        }
    }

    //MENGGABUNGKAN DAN MENGURUTKAN LIST
    if (HeadA == NULL) //apabila list A kosong
    {
        HeadA=HeadB;
    }
    else
    {
        tempA->link = HeadB; //tail A diberikan pointer headB
    }
    notSorted = 1;
    //sort dengan bubble sort
    while(notSorted)
	{
	    notSorted = 0;
	    for(processA = HeadA; processA != NULL; processA = processA->link)
            if(processA->link != NULL)
                if(processA->data < processA->link->data)
                {
                    temp = processA->data;
                    processA->data = processA->link->data;
                    processA->link->data = temp;
                    notSorted = 1;
                }
	}
	//PROSES OUTPUT LAYAR
    process=HeadA;
    printf("Hasil sorted merge : \n");
    while (process!=NULL)
    {
        printf("%d ",process->data);
        process=process->link;
    }
    printf("\n");
    return 0;
}


