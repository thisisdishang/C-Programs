#include<stdio.h>
void main()
{
    int flag,num;
    flag=1;

    printf("Enter the number:");
    scanf("%d",&num);

    for (int i = 2; i <= num / 2; i++) {  
        if (num % i == 0) { 
            flag = 0; 
            break; 
        } 
    }  

    if(num==1) {
        printf("The Nummber 1 is not a Prime Number");
    }
    else if (flag) { 
        printf("The number %d is a Prime Number\n",num); 
    } 
    else { 
        printf("The number %d is not a Prime Number\n",num); 
    }
}