//Different types of functions in C
#include<stdio.h>

void NoPara(){
    printf("Function with no parameter.\n");
}

int returnValue(){
    printf("A function return value.\n");
    return 1;
}

void FunWithPara(int x){
    printf("A function with parameter %d\n",x);
}

int returnValue2(int a){
    printf("A function with para & return value\n");
    return 2;
}

void main()
{
    int n,temp;

    printf("Enter n:");
    scanf("%d",&n);
    
    NoPara();
    temp=returnValue();
    printf("%d return\n",temp);
    FunWithPara(n);
    temp=returnValue2(n);
    printf("%d return\n5",temp);
}