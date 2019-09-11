/* Praktikum EL2208 Pemecahan Masalah dengan C
 * Modul          : 11
 * Percobaan      : 1
 * Tanggal        : 5 April 2016
 * Nama (NIM)     : Ngakan Putu Ariastu (13214137)
 * Nama File      : problem1.c
 *
 * Deskripsi      : program dengan structure data stuck yang melakukan aritmetika dengan
 *                     metode postfix
*/
#include <stdio.h>

typedef struct stack {//structure data stacktype
    double A[11];
    int Top;
}stack;

void pop ();
void push (double x);

stack stack1;

int main(void)
{   //DEKLARASI VARIABLE
    char temp[11],ch;
    int i=0,j,k=0;
    double x,x1,x2;
    stack1.Top=-1;

    printf("INPUT : \n");
    while(ch!='\n')    // terminates if user hit enter
    {
        ch=getchar();   //membaca seri postfix arithmetic
        temp[i]=ch;
        i++;
    }
    for(j=0;j<=i-2;j++){
        if (temp[j]=='+'){  //percabangan operator
            x1=stack1.A[stack1.Top];
            x2=stack1.A[stack1.Top-1];
            x=x1+x2;
            pop();
            pop();
            push(x);
        }
        else if (temp[j]=='-'){
            x1=stack1.A[stack1.Top];
            x2=stack1.A[stack1.Top-1];
            x=x1-x2;
            pop();
            pop();
            push(x);
        }
        else if (temp[j]=='*'){
            x1=stack1.A[stack1.Top];
            x2=stack1.A[stack1.Top-1];
            x=x1*x2;
            pop();
            pop();
            push(x);
        }
        else if (temp[j]=='/'){
            x1=stack1.A[stack1.Top];
            x2=stack1.A[stack1.Top-1];
            x=x1/x2;
            pop();
            pop();
            push(x);
        }
        else if (temp[j]!='\n'){
            x=temp[j]-48;   //apabila bukan operator dan enter ditaruh di stack
            push(x);
        }
    }
    printf("%.2lf\n",stack1.A[stack1.Top]); //output ke layar dari stack
	return 0;
}
void pop(){//prosedur pop stack
    stack1.Top= stack1.Top-1;
}
void push (double x){ //prosedur push
    stack1.Top = stack1.Top+1;
    stack1.A[stack1.Top]=x;
}


