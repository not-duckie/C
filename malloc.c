#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
   
   char *str;
   printf("\n\n\n\n\b");
   printf("\n\nAllocating memory\n\n");
   str = (char *) malloc(15*sizeof(char));
   printf("\n\ncopying data to memory\n\n");
   strcpy(str, "nice guy pewdiepie");
   printf("\n\n");
   puts(str);
   printf("deallocating memory\n");
   free(str);
   printf("\n\n\n");
   return(0);
}