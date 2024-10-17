//PROGRAM NO.-9

//Write a PROGRAM TO IMPLEMENT MATRIX CHAIN MULTIPLICAYION PROBLEM USING DYNAMIC PROGRAMMING
#include<iostream.h>
#include<conio.h>
void print(int s[10][10],int a,int b);
void main()
{
    clrscr();
    int x,i,j,n,l,k,a[10],b[10],m[10][10],q,p[10],s[10][10];
    cout<<"\n Enter the number of matrices: ";
    cin>>n;
    cout<<"\n Enter the rows of matrices : \n";
    for(i=1;i<=n;i++)
    {    
	cout<<" "<<i<<" -: ";
    cin>>a[i];}
    cout<<"\n Enter the columns of matrices : \n";
    for(j=1;j<=n;j++)
    {   
	cout<<" "<<j<<" -: ";
    cin>>b[j];  }
    p[0]=a[1];
    for(x=1;x<=n;x++)
    p[x]=b[x];
    cout<<"\n Matrices are -: ";
    for(x=1;x<=n;x++)
    cout<<"\nA["<<x<<"]"<< " = " <<a[x]<<" * "<<b[x];
    for(i=1;i<=n;i++)
    m[i][i]=0;
    for(l=2;l<=n;l++)
   {
   for(i=1;i<=n-l+1;i++)
   {
   j=i+l-1;
    m[i][j]=1000000;
    for(k=i;k<=j-1;k++)
   {
   q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
   if(q<m[i][j])
   {
   m[i][j]=q;
   s[i][j]=k;
}
}
}
}

cout<<"\n\n Order of Multiplication -: ";
print(s,i-1,j);
getch();}

void print(int s[10][10],int a,int b)
{
if(a==b)
{
cout<<"A"<<a;
}
else
{
cout<<"(";
print(s,a,s[a][b]);
print(s,s[a][b]+1,b);
cout<<")";
}
}

