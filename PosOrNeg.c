#include<stdio.h>
void main()
{
 int n;
 printf("Enter the number.");
 scanf("%d",&n);
 if(n>0)
   printf("Positive");
 else if(n<0)
   printf("Negative");
 else
   printf("Zero");
}
