#include <stdio.h>

int main() {
    int i, j, count;
   int start, end;

   start = 2, end = 9;

   printf("In bang cuu chuong :\n");
   for(i = start; i <= end; i++) {
      count = i;

      for(j = 1; j <= 10; j++) {
         printf(" %3d", count*j);
      }

      printf("\n");
   }

   return 0;
}
