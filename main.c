#include <stdio.h>
#include <stdlib.h>

int main()
{
   char rev[50];

   printf("Enter some text below: \n");
   gets(rev);

   strrev(rev);

   printf("%s\n", rev);

   return 0;
}
