#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
 char ch[10];
 int i;
 clrscr();
 printf("Enter String: ");
 gets(ch);

 for(i=0;ch[i]!=NULL;i++)
 {
  if(islower(ch[i])>0)
   ch[i]=toupper(ch[i]);
  else
   ch[i]=tolower(ch[i]);
 }
 printf("\nOutput:-%s",ch);
 getch();
}
