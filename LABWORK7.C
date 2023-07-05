//7.2 Q7 write a program to print the below pattern using nested for loop.
/* return
A
BA
CBA
DCBS
EDCBA */
#include<stdio.h>
#include<conio.h>
void main(){
char i,j;
clrscr();
for(i='A';i<='E';i++){
   for(j=i;j>='A';j--){
   printf("%c",j);}printf("\n");}

getch();}