#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
  char a[100];
  int b,i;
  clrscr();
  printf("Enter the string\n");
  scanf("%s",a);
  b=strlen(a);
  if(b%2!=0)
  {
    for(i=b;i>=b-2;i--)
    {
      a[i]='O';
    }
  }
  for(i=0;i<b;i++)
  {
    if(a[i]=='i')
      a[i]='e';
    if(a[i]=='a')
      a[i]='u';
    printf("%c",a[i]);
  }
  getch();
}
