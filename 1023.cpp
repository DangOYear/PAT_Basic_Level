#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a,int b)
{
	return a<b;
}

int main()
{
	int a[51];
	int smin=10;
	int N,temp,i,count=0,mark=0;
	for(i=0;i<=9;i++)
	{
		cin>>N;
		if(mark==0&&i!=0&&N!=0)
		{
			mark=count;
		}
		for(int j=0;j<N;j++)
		{
			a[count]=i;
			count++;
		}
	}
	//cout<<mark<<endl;
	temp=a[mark];
	a[mark]=a[0];
	a[0]=temp;
	//sort(a+1,a+count,cmp);
	for(int i=0;i<count;i++)
	{
		cout<<a[i];
	}
}
