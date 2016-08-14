#include<iostream>
using namespace std;

int a[1000003];

int main()
{
	int M,N,j=0,count=0;
	
	cin>>M>>N;
	for(int i=2;i<=1000003;i++)
	{
		if(a[i]==0)
		{
			for(int k=i+i;k<=1000003;k+=i)
			{
				a[k]=1;
			}
		}
	}
	
	for(j=2;j<=1000003&&count<=N;j++)
	{
		if(a[j]==0)
		{
			count++;
			if((count-M+1)%10==0&&count>=M)
			{
				cout<<j<<endl;
			}
			else if(count>=M&&count<N)
				{
					cout<<j<<" ";
				}
			else if(count==N)
					cout<<j;
		}
	}
}
