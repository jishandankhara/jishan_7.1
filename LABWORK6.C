//7.2 Q4 write a program to print the below pattern using nested for loop.
/* return
10101
1010
101
01
1 */
#include<stdio.h>
#include<conio.h>
void main(){
int i,j;
clrscr();
for(i=1;i<=5;i++){
   for(j=i;j<=5;j++){
   printf("%d",j%2);}printf("\n");}

getch();}