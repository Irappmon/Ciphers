#include<iostream>
using namespace std;
int main()
{ 
int a,i=1,r,k=0,p;
 long int s=0;
cout<<"Enter a number";
cin>>a;
 while(a>0)
{ r=a%2;
  a=a/2;
  if (r==0){ p=r+1;}
else if( r ==1){ p=r-1;}
cout<<p<<"\n";
}


return 0;
}
