//7.2 Q3 write a program to print the below pattern using nested for loop.
/* return
5
44
333
2222
11111*/

#include<stdio.h>
#include<conio.h>
void main(){
int i,j;
clrscr();
for(i=5;i>=1;i--){
   for(j=i;j<=5;j++){
   printf("%d",i);}printf("\n");}

getch();}