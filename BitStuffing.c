//Bit stuffing is a process of inserting non-information bits into the data to be transferred
#include<stdio.h>
#define MAX 100

void main(){
    int a[MAX],b[MAX],n,c=0,p=0;

    printf("Enter the bit limit:");
    scanf("%d",&n);

    printf("\nEnter the string of 0's and 1's:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    printf("\nBefore bit stuffing the string is:-\n");
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }

    for(int i=0;i<n;i++){
        if(a[i]==1)
            c++;
        else
            c=0;
        if(c==5){
            p++;
            n+=1;
            for(int j=n-1;j>i+1;j--){
                a[j]=a[j-1];
            }
            a[i+1]=0;
        }
    }

    printf("\n\nAfter bit stuffing the string is:-\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}