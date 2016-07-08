#include<stdio.h>
#include<conio.h>
void main()
{
int i,c=0,n,n1,b;
char a[50][50];
clrscr();
printf("Enter the array");
scanf("%d",&n1);
for(i=0;i<=n1;i++)
{
scanf("%s",&a[i]);
}
printf("Enter the length");
scanf("%d",&n);
//b=strlen(a);
for(i=0;i<=n1;i++)
{
b=strlen(a[i]);
if(b==n)
c++;
}
printf("%d",c);
getch();
}
