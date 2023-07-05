//7.2 Q8 write a program to print the below pattern using nested for loop.
/* return
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/
#include<stdio.h>
#include<conio.h>
void main(){
int j,i,s=0;
clrscr();
for(i=1;i<=5;i++){
   for(j=1;j<=i;j++){
   printf("%d  ",s++);}printf("\n");}

getch();}
