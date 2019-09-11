/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 12
 * Percobaan      : 1
 * Tanggal        : 8 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      : memberikan total waktu pelayanan dari banyaknya antrian beserta waktu pelayanan dengan adanya
 *                  3 pelayanan  Anisa (A), Bunga (B), dan Chandra (C). Apabila ada yang selesai bersamaan maka
 *                  prioritas berdasarkan abjad.
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

//MAIN PROGRAM
int main (){
    //DEKLARASI VARIABLE
    typeQueue queue;
    int A=0,B=0,C=0; //inisialisasi nilai teller
    int x,i,data;
    queue.head = NULL; //inisialisasi queue kosong
    queue.tail = NULL;

    scanf ("%d",&x);
    for (i = 1; i <= x ; i++ ) { //memindahkan data ke queue
        scanf("%d",&data);
        enQueue(data,&queue);
    }
    while (queue.head != NULL){ //simulasi queue dan teller
            if ((A <= B) && (A <= C)){//apabila teller A selesai duluan dan saat selesai bersamaan dengan B dan C
                A += deQueue(&queue);
            }else
            if  ((B < A) && (B <= C)){//apabila teller B selesai duluan dan selesai bersamaan dengan C
                B += deQueue(&queue);
            }else
            if  ((C < A) && (C < B)){//apabila teller C selesai duluan
                C += deQueue(&queue);
            }
    }
    if ((A >= B) && (A >= C)){ //printf nilai terbesar
            printf("Waktu yang diperlukan adalah %d menit\n",A);
        }else
    if  ((B > A) && (B >= C)){
            printf("Waktu yang diperlukan adalah %d menit\n",B);
        }else
        if  ((C > A) && (C > B)){
            printf("Waktu yang diperlukan adalah %d menit\n",C);
        }
    return 0;
}

//FUNCTION AND PROCEDURE ALGORITHM
void enQueue (int data, typeQueue *queue){
    struct node* temp = (struct node*)malloc(sizeof(node)); //membuat pointer menuju data baru
    temp->data = data; //memasukkan data pad pointer yg dituju
    temp->link = NULL; //link pointer tail adalah null
    if(queue->head == NULL && queue->tail == NULL){ //apabila queue kosong
		queue->head = temp;
		queue->tail = temp;
		return;
	}
	queue->tail->link = temp;//memberi  nilai pointeer  data baru ke tail
	queue->tail = temp;//memindahkan nilai tail

}
int deQueue (typeQueue *queue){
   struct node* temp = queue->head; //memindahkan pointer head ke temp
   int x = queue->head->data; //mengambil nilai head
	if(queue->head == NULL) {//jika queue kosong
		printf("Queue is Empty\n");
		return;
	}
	if(queue->head == queue->tail) {//jika queue berisi satu elemen
		queue->head = NULL;
		queue->tail = NULL;
	}
	else {
		queue->head = queue->head->link; //memindahkan nilai head menjadi link berikutnya
	}
	free(temp);//mengosongkan pointer head lama
	return x;
}
