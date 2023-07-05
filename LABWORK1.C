//7.2 Q1 write a program to print the below pattern using nested for loop.
/* return
1
21
321
4321
54321 */
#include<stdio.h>
#include<conio.h>
void main(){
int i,j;
clrscr();
for(i=1;i<=5;i++){
   for(j=i;j>=1;j--){
   printf("%d",j);}printf("\n");}

getch();}