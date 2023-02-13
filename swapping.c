#include <stdio.h>
 int main()
 {
   int a, b;
   printf("A: ");
   scanf("%d",&a);
   printf("B: ");
   scanf("%d",&b);
   //using operator
   a^=b^=a^=b;
   printf("a=%d b=%d", a,b);
 }
