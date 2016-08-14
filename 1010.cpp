#include<iostream>
using namespace std;

struct term{
	int exp;
	int coe;
};


int main()
{
	struct term t[10000];
	int count_t=0,i,j=0;
	while(cin>>t[count_t].coe>>t[count_t].exp)
	{
		count_t++;
	}
	for(i=0;i<count_t;i++)
	{
		if(t[i].exp==0)
			continue;
		else
		{
			cout<<t[i].coe*t[i].exp<<" "<<t[i].exp-1;
			i++;
			j++;
			break;
		}
	}
	for(;i<count_t;i++)
	{
		if(t[i].exp==0)
			continue;
		else
		{
			cout<<" "<<t[i].coe*t[i].exp<<" "<<t[i].exp-1;
			j++;
		}
	}
	if(j==0)
	cout<<"0 0";//导数为0输出0 
}
