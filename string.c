#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
str*rev;
printf("Enter the string");
scanf("%d",str);
rev=strrev(str);
printf("Reverse string is:%s",rev);
return 0;
}
