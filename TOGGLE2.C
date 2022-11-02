#include<stdio.h>
#include<conio.h>
void main()
{
  char ch[100];
  int i;
  clrscr();
  printf("Enter The Character: ");
  gets(ch);
  for(i=0;ch[i]!=NULL;i++)
  {
    if(ch[i]>=65 && ch[i]<=90)
      ch[i]+=32;
    else if(ch[i]>=97 && ch[i]<=122)
      ch[i]-=32;
  }
  printf("\nAfter Toggle Case:%s",ch);
  getch();
}