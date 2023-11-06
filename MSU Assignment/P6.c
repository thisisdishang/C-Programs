//Fibonacci series up to given number
#include<stdio.h>
void main()
{
    int num,temp,i,f=0,s=1;

    printf("Enter a number:");
    scanf("%d",&num);

    if(num==0){
        return;
    }
    else{
        for(i=1;i<=num;i++){
            if(i==1)
                printf("0 ");
            else if(i==2)
                printf("1 ");
            else{
                temp=f;
                f=s;
                s=s+temp;
                printf("%d ",s);
            }
        }
    }
}