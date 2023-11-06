//Swaping two number using three functions parameters passing by value,by pointer and by reference
#include<stdio.h>
#include<conio.h>

void SwapByValue(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

/*
void SwapByPointer(int* a,int* b){
    int* temp=*a;
    *a=*b;
    *b=temp;
}*/

/*void SwapByRefer(int &a,int &b){
    int temp=&a;
    &a=&b;
    &b=temp;
}*/

void main()
{
    int n1=10,n2=5;
    
    printf("Original Value n1=%d n2=%d\n",n1,n2);
    SwapByValue(n1,n2);
    printf("After Swapping By Value n1=%d n2=%d\n",n1,n2);
    /*SwapByPointer(*n1,*n2);
    printf("After Swapping By Pointer n1=%d n2=%d\n",n1,n2);
    SwapByRefer(n1,n2);
    printf("After Swapping By Reference n1=%d n2=%d\n",n1,n2);*/
}