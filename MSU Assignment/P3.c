//Minimum & maximum number from array
#include<stdio.h>
void main()
{
    int a[20],i,max,min,size;
    
    printf("Enter size of the array:");
    scanf("%d",&size);

    printf("Enter element in the array:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    max=a[0];
    min=a[0];

    for(i=1;i<size;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Maximum Element: %d\n",max);
    printf("Minimum Element: %d\n",min);
}