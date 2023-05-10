#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
int i,n,a[5],b;
char y;
start:
system ("CLS");
printf("\n\nChoose any number from here!\n");
printf("-------------------------------------\n");
printf("serial=(1)\t3,4,5,6,7,9,11,13,14,16,17,21,22,23\n");
printf("serial=(2)\t3,7,8,9,10,11,12,14,17,22,26\n");
printf("serial=(3)\t4,7,8,13,14,15,16,17,18,23,26\n");
printf("serial=(4)\t5,9,10,13,14,15,21,22,23,24,26\n");
printf("serial=(5)\t6,11,12,16,17,18,21,22,23,24,26\n");

printf("\nEnter the number of lines in which your number lies:-\t");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    printf("\nEnter the %d serial number:\t",i+1);
    scanf("%d",&a[i]);
}

system ("CLS");
switch(n)
{
case 2:
  b=a[0]*a[1]+a[0];
  printf("\nYour choosen number is %d",b);
  break;

case 3:
    b=a[2]*a[1]+a[0];
    printf("\nYour choosen number is %d",b);
    break;

case 4:
    b=a[0]*a[1]+a[2]*a[3];
    printf("\nYour choosen number is %d",b);
    break;

default:
    printf("\nInvalid input");
}
printf("\n\nDo you want to try again(y/n)?\n");
y=getche();
if(y=='y')
    goto start;
system ("CLS");
printf("\n\nThanks for playing...");
}
