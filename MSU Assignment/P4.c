//Check number is palindrome or not
#include<stdio.h>
void main()
{
    int num,rev,ori,remain;
    rev=0;
    printf("Enter a number:");
    scanf("%d",&num);
    ori=num;
    
    while (num!=0)
    {
        remain=num%10;
        rev=rev*10+remain;
        num/=10;
    }
    
    if(ori==rev){
        printf("%d is a palindrome number",ori);
    }
    else{
        printf("%d is not a palindrome number",ori);
    }    
}