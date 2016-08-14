#include<iostream>
using namespace std;

int main()
{
	long a,b,c;
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
		cin>>a>>b>>c;
		if(a+b<=c)
			cout<<"Case #"<<i<<": false"<<endl;
		else
			cout<<"Case #"<<i<<": true"<<endl;
			
	}
}
