#include<iostream>
#include<string>
using namespace std;

void transer(int n)
{
	switch(n){
		case 0:cout<<"ling";break;
		case 1:cout<<"yi";break;
		case 2:cout<<"er";break;
		case 3:cout<<"san";break;
		case 4:cout<<"si";break;
		case 5:cout<<"wu";break;
		case 6:cout<<"liu";break;
		case 7:cout<<"qi";break;
		case 8:cout<<"ba";break;
		case 9:	cout<<"jiu";break;
	}
}

int main()
{
	string s;
	cin>>s;
	int num;
	int trans[102]={0};
	for(int i=0;i<s.size();i++)
	{
		num+=s[i]-48;
	}
	int i=0;
	while(num!=0)
	{
		trans[i]=num%10;
		num/=10;
		i++;
	}
	while(i>1)
	{
		i--;
		transer(trans[i]);	
		cout<<" ";
	}
	transer(trans[0]);
	cout<<"t" ;
}
