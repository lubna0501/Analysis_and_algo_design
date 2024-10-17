//program  3
//WRITE A PROGRAM TO QUICK SORT
#include<iostream.h>
#include<conio.h>
int partition(int* ,int ,int);
void quick(int* ,int ,int);

void quick(int arr[],int lower,int higher)
{int j;
if(higher>lower)
{j=partition(arr,lower,higher);
quick(arr,lower,j-1);
quick(arr,j+1,higher);
}
}

int partition(int arr[],int lower,int higher)
{
int j,lft,rgt,temp;
lft=lower+1;
rgt=higher;
j=arr[lower];
while(lft<=rgt)
{while(arr[lft]<j)
{lft++;}
while(arr[rgt]>j)
{rgt--;}

if(lft<rgt)
{temp=arr[lft];
arr[lft]=arr[rgt];
arr[rgt]=temp;
}
}
temp=arr[lower];
arr[lower]=arr[rgt];
arr[rgt]=temp;
return rgt;
}

main()
{
//clrscr();
int i,n,a[20],high,low;
cout<<"\nEnter no of elements of the array: ";
cin>>n;
low=0;
high=n-1;
cout<<"\nEnter the elements of the array: "<<endl;
for(i=0;i<n;i++)
{cin>>a[i];}

quick(a,low,high);
cout<<"\nThe sorted array is: ";
for(i=0;i<n;i++)
{cout<<" "<<a[i];}
getch();

return 0;
}

