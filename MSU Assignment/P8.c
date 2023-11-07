//Swaping two number using three functions parameters passing by value,by pointer and by reference
#include<stdio.h>
#include<conio.h>

//Function to swap two variables using parameter passing by value
void SwapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//Function to swap two variables using parameter passing by pointer
void SwapByPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
//Note:Run this function in CPP
//Function to swap two variables using parameter passing by reference
void SwapByRefer(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}*/

int main()
{
    int n1 = 22, n2 = 5;
    
    printf("Original Value number 1 = %d number 2 = %d\n",n1,n2);

    //Swap by value (Original values will not change)
    SwapByValue(n1, n2);
    printf("After Swapping By Value number 1 = %d number 2 = %d\n",n1,n2);

    //Swap by pointer (Original values will change)
    SwapByPointer(&n1, &n2);
    printf("After Swapping By Pointer number 1 = %d number 2 = %d\n",n1,n2);

    /*//Swap by reference (Original values will change)
    SwapByRefer(n1, n2);
    printf("After Swapping By Reference number 1 = %d number 2 = %d\n",n1,n2);*/

    return 0;
}