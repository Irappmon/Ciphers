#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

int x1,x2;


void main(){

clrscr();

char arr[10],arr1[10],temp,ch[26], key[5][5];
int len,x=0,y=0;

cout<<"Enter the Key :";
gets(arr);

len=strlen(arr);

cout<<endl<<endl;

strcpy(arr1,arr);

//sorting for comparison
for(int i=0;i<len;i++)
{
	temp=arr[i];
	for(int j=i+1;j<len;j++)
	{
	if(arr[j]<temp)
	{
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
	}
}

	cout<<" "<<arr[i];

}
  getch();

  cout<<endl;

for( i=97;i<97+26;i++)
{
	   if(arr[y]==i)
	    {
		y++;
	     }
	   else
	  {
	       temp=i;
		ch[x]=temp;
		x++;
	 }

}

x=0,y=0;

cout<<endl<<endl<<"PlayFair Key is : \n";
for( i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		if(y<len)
		{
			key[i][j]=arr1[y];
			y++;
		}
		else
		{
			if(ch[x]=='i'&&ch[x+1]=='j')
			{
				x++;
			}
			if((ch[x]=='j' && ch[x-1]!='i')||(ch[x]=='i'&& ch[x+1]!='j'))
			{
				x++;


			}
			if((ch[x]=='i'&&ch[x+8]=='q')||(ch[x]=='j'&&ch[x+7]=='q'))
			{
				x++;
			}

			key[i][j]=ch[x];
			x++;

		}

		cout<<" "<<key[i][j];
	}
	cout<<endl;


}


//Program2

//key splitting 100% successful

char ch1[15];
char ch2[30];
int len1,j,cnt;
cout<<"Enter the string : ";
gets(ch1);
len1=strlen(ch1);

 i=0;
j=1;

cnt=0;

 for(int k=0;k<len1;k++)
{
	if(ch1[k]==ch1[k-1])
	{

		for(x=i;x<k;x++)
		{

			ch2[cnt]=ch1[x];

			 cnt++;

		}


		if(cnt%2!=0)
		{

		ch2[cnt]='x';

		cnt++;
		}

	  i=k;
	}

	if(k==len1-1)
	{
			for(x=i;x<len1;x++)
		{

			ch2[cnt]=ch1[x];

			 cnt++;

		}
			if(cnt%2!=0)
		{

		ch2[cnt]='x';

		cnt++;
		}



	}


}
for(i=0;i<cnt;i++)
{
	if(i%2==0)
	{
		cout<<" ";
	}

	cout<<ch2[i];


}

cout<<endl;

char cpher[30];
x=0;

for(k=0;k<cnt;k+=2)
{



for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{

		if(ch2[k]==key[i][j])
		{

			for(int m=0;m<5;m++)
			{
				if(ch2[k+1]==key[m][j])
				{
			       cpher[x]=key[i+1][j];
			       x++;
				cpher[x]=key[m+1][j];
				 cout<<""<<cpher[x-1]<<cpher[x];
				x++;
				break;

				}

				if(ch2[k+1]==key[i][m])
				{

					cpher[x]=key[i][j+1];
					 x++;
					cpher[x]=key[i][m+1];
					cout<<""<<cpher[x-1]<<cpher[x];
					x++;
					break;
				}



			}

			cout<<" no ";


		}


	}
}

//break;

}

getch();



}












