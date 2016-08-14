#include<iostream>
using namespace std;

int main()
{
	//char[21][21];
	char c;
	int N,M;
	cin>>N;
	cin>>c;
	M=(int)((float)N/2+0.5);
	for(int i=0;i<N;i++)
	{
		cout<<c;
	}
	cout<<endl;
	for(int i=0;i<M-2;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(j==0||j==N-1)
				cout<<c;
			else
				cout<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<N;i++)
	{
		cout<<c;
	}
	
}
