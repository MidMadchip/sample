#include <stdio.h>
#include <string.h>

int main()
{
char word[50];
FILE *fp = fopen("/home/sathvik/input.txt","r");

if(fp == NULL)
{
printf("The file is not opening");
return 1;
}


while(fscanf(fp,"%s",word)!=EOF)
{
printf("%s\n",word);
}

return 0;
}
