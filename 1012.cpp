#include<iostream>
#include<iomanip>
using namespace std;

void A1(int a[],int N)
{
	int sum=0;
	for(int i=0;i<N;i++)
	{
		if(a[i]%5==0&&a[i]%2==0)
			sum+=a[i];
	}
	if(sum==0)
		cout<<"N"<<" ";
	else
		cout<<sum<<" ";
}

void A2(int a[],int N)
{
	int sum=0;
	int co=0;
	int mark=1;
	for(int i=0;i<N;i++)
	{
		if(a[i]%5==1)
		{
			sum+=mark*a[i];
			mark=-mark;
			co++;
		}
	}
	if(co==0)
		cout<<"N"<<" ";
	else
		cout<<sum<<" ";
}

void A3(int a[],int N)
{
	int count=0;
	for(int i=0;i<N;i++)
	{
		if(a[i]%5==2)
			count++;
	}
	if(count==0)
		cout<<"N"<<" ";
	else
		cout<<count<<" ";
}

void A4(int a[],int N)
{
	double sum=0;
	int count=0;
	for(int i=0;i<N;i++)
	{
		if(a[i]%5==3)
		{
			sum+=a[i];
			count++;
		}
	}
	if(count==0)
		cout<<"N"<<" ";
	else
		cout<<fixed<<setprecision(1)<<sum/count<<" ";
}

void A5(int a[],int N)
{
	int max=0;
	bool count=false;
	for(int i=0;i<N;i++)
	{
		if(a[i]%5==4)
			if(max<a[i])
			{
				max=a[i];
				count=true;
			}
	}
	if(!count)
		cout<<"N";
	else
		cout<<max;
}

int main()
{
	int a[10001];
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>a[i];	
	}
	A1(a,N);
	A2(a,N);
	A3(a,N);
	A4(a,N);
	A5(a,N);
}
