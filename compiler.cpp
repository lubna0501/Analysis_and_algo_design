#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[5][10]={"printf","scanf","if","else","break"};
	char str[10];
	int i,flag;
	clrscr()
	puts("Enter the string :: ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(strcmp(str,a[i])==0)
		{
			flag=1;
			break;
		}
		else
		flag=0;
	}
if(flag==1)
puts("Keyword");
else
puts("String");
getch();
}
