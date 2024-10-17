//PROGRAM NO.-10

//Write a PROGRAM TO IMPLEMENT NAIVE STRING MATCHING

#include<iostream.h>  
#include<conio.h>
#include<string.h>
#include<stdio.h>
void naive_string_matcher(char text[],char pat[])
{
    char temp[100];
    int n=strlen(text);
    int m=strlen(pat);
    int i,j,s,k;
    for(s=0;s<=n;s++)
    {
	for(j=s,k=0;j<m;j++,k++)
    temp[k]=text[s+k];
    temp[k]='\0';
    if(strcmp(pat,temp)==0)
    cout<<"\n PATTERN OCCURS WITH SHIFT : "<<s<<"\n";
    m++;
	}
}
void main()
{   
    clrscr();
    char text[100],pat[100];
    cout<<"\n ENTER THE TEXT    : ";
    gets(text);
    cout<<"\n ENTER THE PATTERN : ";
    gets(pat);
    naive_string_matcher(text,pat);
    getch();
}


