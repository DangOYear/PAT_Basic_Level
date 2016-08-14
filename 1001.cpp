#include<iostream>
using namespace std;

int Step(int num)
{
	int step=0;
	while(num!=1)
	{
		if(num%2==0)
			num/=2;
		else
			num=(3*num+1)/2;
		step++;
	}
	return step;
}

int main()
{
	int num;
	cin>>num;
	cout<<Step(num)<<endl;
}
