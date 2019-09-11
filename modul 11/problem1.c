/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 12
 * Percobaan      : 0 (TP)
 * Tanggal        : 8 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      :
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

//MAIN PROGRAM
int main (){
    typeQueue A;
    int x;
    A.head=NULL;
    A.tail=NULL;

    enQueue(2,&A); Print(&A);
    enQueue(4,&A); Print(&A);
    enQueue(6,&A); Print(&A);
    x=deQueue(&A);  Print(&A);
    printf ("%d\n",x);
	enQueue(8,&A); Print(&A);
    return 0;

}

//FUNCTION AND PROCEDURE ALGORITHM
void enQueue (int data, typeQueue *queue){
    struct node* temp = (struct node*)malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;
    if(queue->head == NULL && queue->tail == NULL){
		queue->head = temp;
		queue->tail = temp;
		return;
	}
	queue->tail->link = temp;
	queue->tail = temp;

}
int deQueue (typeQueue *queue){
   struct node* temp = queue->head;
   int x = queue->head->data;
	if(queue->head == NULL) {
		printf("Queue is Empty\n");
		return;
	}
	if(queue->head == queue->tail) {
		queue->head = NULL;
		queue->tail = NULL;
	}
	else {
		queue->head = queue->head->link;
	}
	free(temp);
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



