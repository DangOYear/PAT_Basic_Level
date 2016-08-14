#include<iostream>
using namespace std;

int main()
{
	int N;
	int score[101]={0};
	int K;
	int sc;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>sc;
		score[sc]++;
	}
	cin>>K;
	for(int i=0;i<K;i++)
	{
		cin>>sc;
		if(i!=K-1)
			cout<<score[sc]<<" ";
		else
			cout<<score[sc];
	}
	
}
