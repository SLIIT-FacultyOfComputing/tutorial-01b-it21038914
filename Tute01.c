/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2 ;
  float average;

  printf("enter mark 1:- ");
  scanf("%d",&sub1);

  printf("enter mark 2:- ");
  scanf("%d",&sub2);

  average = (float)(sub1+sub2)/2;

  printf("average of %d and %d is %.2f",sub1,sub2,average);


  return 0;
}

