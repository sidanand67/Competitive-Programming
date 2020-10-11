#include<stdio.h>
int main()
{
   char str[1000];
   //accepting string from user
   scanf("%s",str);
   int i=0;
   if(str[i]>='a'&&str[i]<='z')
   {
       str[i]=str[i]-32; //converting the first small letter into capital letter
   }
   //printing the string
   printf("%s",str);
   return 0;
}
