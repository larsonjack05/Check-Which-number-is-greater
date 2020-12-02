/*
Program to check which number is greater
Author: Dhruv Patil
College: Acropolis Indore (IT) Branch
*/

#include <stdio.h>

int main(void) {
  int a,b; //Declare 2 Variable of int type

  printf("Enter First Number "); //first number
  scanf("%d",&a);

  printf("Enter Second Number "); //second number
  scanf("%d",&b);

  if(a>b){
    printf("First Number is greater");
  } else if(b>a){
    printf("Second Number is greater");
  }else if(b==a){
    printf(":( Both Number are Equal");
  } else {
    printf("Critical Error");
  }



	return 0;
}