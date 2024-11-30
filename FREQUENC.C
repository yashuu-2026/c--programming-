#include<stdio.h>
void main()
{
	char str1[100],str2[100];

	clrscr();

	printf("enter a string:");
	gets(str1);

	printf("enter second string:");
	gets(str2);

	strcat(str1,str2);
	printf("concatinated string:%s\n",str1);
	}

