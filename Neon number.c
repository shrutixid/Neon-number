#include<stdio.h>
#include<math.h>
void main ()
{
 printf("The following program is to find whether the given number is a neon number or not :-\n\n");
 double num,c=0,x,temp,sq,divi;
 printf("Enter any number :-");
 scanf("%d",&num);
 temp=num;
 while(num>0)//The loop is used to count the digits in the provided number
 {
  c++;
  num=num/10;
 }
 num=temp;
 sq=num*num;//To find the square of the given number
 divi=num/(pow(10,c));
 if(sq==divi)
 {
  printf("------NEON NUMBER------");
 }
 else
 {
  printf("------NOT A NEON NUMBER ------");
 }
 }
