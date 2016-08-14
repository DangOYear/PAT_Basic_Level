#include<iostream>
using namespace std;


int main()
{
	int a[101],b[101];
	int N,M;
	cin>>N>>M;
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<N;i++)
	{
		b[(i+M)%N]=a[i];
	}
	for(int i=0;i<N-1;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<b[N-1];
}
