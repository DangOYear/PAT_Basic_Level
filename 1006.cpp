#include<iostream>
using namespace std;

int main()
{
	int num;
	int a[3]={0};
	cin>>num;
	for(int i=0;i<3;i++)
	{
		if(num==0)
			break;
		a[i]=num%10;
		num=num/10;
	}
	for(int i=0;i<a[2];i++)
	{
		printf("B");
	}
	for(int i=0;i<a[1];i++)
	{
		printf("S");
	}
	for(int i=1;i<=a[0];i++)
	{
		printf("%d",i);
	}
}
