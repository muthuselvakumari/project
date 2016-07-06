#include <stdio.h>
#include<string.h>
int main()
{
   char s[100],i,count=0;
   printf("\n enter the string");
   scanf("%s",s);
   for(i=0;i<=strlen(s);i++)
   {
   if(s[i]==' ')
   count++;
   }
   printf(" the count of words in a given string is: %d",count+1);
    return 0;
}
