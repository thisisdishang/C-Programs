//Array in ascending & descending order
#include<stdio.h>
void main()
{
    int a[20],n,i,j,temp;
    printf("How many numbers you want to enter:");
    scanf("%d",&n);
    printf("Enter the element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j)
        {
 
            if (a[i] > a[j]) 
            {
 
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
 
            } 
        } 
    }
    printf("\nIn Ascending Order:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j)
        {
 
            if (a[i] < a[j]) 
            {
 
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
 
            } 
        } 
    }

    printf("\nIn Descending Order:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}