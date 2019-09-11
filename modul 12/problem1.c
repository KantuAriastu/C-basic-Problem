/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 12
 * Percobaan      : 0 (TP)
 * Tanggal        : 8 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      : program berisi data type queue dan node beserta beberapa operator yg ada seperti
 *                  memasukkan queue (enQueue) dan mengeluarkan queue (deQueue) serta print semua nilai queue
*/
#include <stdio.h>
#include<stdlib.h>

// TYPE DEFINE
typedef struct node{
    int data;
    struct node* link;
} node;

typedef struct typeQueue{
     node* head;
     node* tail;
}typeQueue;

//FUNCTION AND PROCEDURE DEFINE
void enQueue (int data, typeQueue *queue);
int deQueue (typeQueue *queue);
void Print(typeQueue *queue);
void cutQueue (int data, typeQueue *queue){
    struct node* temp = (struct node*)malloc(sizeof(node)); //membuat suatu pemyimpanan nilai sementara
    temp->data = data; //mengisi nilai pada pointer yg dituju
    temp->link = NULL;
	//potong antrian queue ke depan 
    if(queue->head == NULL && queue->tail == NULL){ //apabila queue masih kosong
		queue->head = temp;
		queue->tail = temp;
		return;
	}
	struct node* temp2 = (struct node*)malloc(sizeof(node));
	temp2 = queue->head;
	queue->head = temp;
	queue->head->link = temp2;
	

}

//MAIN PROGRAM
int main (){
    //test
     typeQueue A;
     int x;
    A.head = NULL;//inisialisasi nilai awal
    A.tail = NULL;

    enQueue(2,&A); Print(&A);
	enQueue(4,&A); Print(&A);
	enQueue(6,&A); Print(&A);
	cutQueue(99,&A); Print(&A);
	x=deQueue(&A); Print(&A);
	printf("%d\n",x);
	enQueue(8,&A); Print(&A);
    return 0;
}

//FUNCTION AND PROCEDURE ALGORITHM
void enQueue (int data, typeQueue *queue){
    struct node* temp = (struct node*)malloc(sizeof(node)); //membuat suatu pemyimpanan nilai sementara
    temp->data = data; //mengisi nilai pada pointer yg dituju
    temp->link = NULL;
    if(queue->head == NULL && queue->tail == NULL){ //apabila queue masih kosong
		queue->head = temp;
		queue->tail = temp;
		return;
	}
	queue->tail->link = temp;   //apabila queue tidak kosong
	queue->tail = temp;

}
int deQueue (typeQueue *queue){
   struct node* temp = queue->head; //mengalokasikan pointer head pada temp
   int x = queue->head->data;
	if(queue->head == NULL) {//apabila queue kosong
		printf("Queue is Empty\n");
		return 999;
	}
	if(queue->head == queue->tail) { //jika queue hanya satu elemen
		queue->head = NULL;
		queue->tail = NULL;
	}
	else {
		queue->head = queue->head->link; //menggeser nilai head
	}
	free(temp); //mengosongkan memory pointer head sebelumnya
	return x;
}

void Print(typeQueue *queue) {
	struct node* temp;
	temp = queue->head;;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->link;
	}
	printf("\n");
}
