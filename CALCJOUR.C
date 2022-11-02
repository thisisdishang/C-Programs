#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
   int n1,n2,opt,power;
   clrscr();
   printf("***** CALCULATOR *****");
   printf("\nEnter First Number: ");
   scanf("%d",&n1);
   printf("\nEnter Second Number: ");
   scanf("%d",&n2);

   for(;;)
   {
     printf("\n\n1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Power.\n6-Exit.");
     printf("\n\n\nEnter Your Option:");
     scanf("%d",&opt);

     switch(opt)
     {
       case 1: printf("Addition Is= %d",n1+n2);
	       break;

       case 2: printf("Substraction Is= %d",n1-n2);
	       break;

       case 3: printf("Multiplication Is= %d",n1*n2);
	       break;

       case 4: printf("Division Is= %d",n1/n2);
	       break;

       case 5: printf("Power Is= %d",power=pow(n1,n2));
	       break;

       case 6: exit(0);
	       break;

      default: printf("Your Operator Invalid");
     }
   }
     getch();
 }


