int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0;
 
   printf("\n\n\n");
   printf("Input a string\n");
   gets(s);
 
   // Calculating string length
 
   while (s[count] != '\0')
      count++;
 
   end = count - 1;
 
   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }
 
   r[begin] = '\0';
   printf("\n");
   printf("%s\n", r);
   printf("\n\n\n"); 
   return 0;
}