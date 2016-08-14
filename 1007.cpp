#include<iostream>
using namespace std;

int main()
{
	int a[100001]={0};
	int N;
	int border,count=0;
	cin>>N;
	for(int i=2;i<=N;i++)
	{
		if(a[i]==0)
		{
			for(int j=i+i;j<=N;j+=i)
			{
				a[j]=1;
			}
		}
	}
	border=N-2;
	for(int i=2;i<=border;i++)
	{
		if(a[i]==0&&a[i+2]==0)
			count++;
	}
	cout<<count;
}
