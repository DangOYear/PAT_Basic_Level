#include<iostream>
#include<algorithm>
using namespace std;

struct student{
	int id;
	int de;
	int cai;
	int level;
};

bool cmp(struct student a,struct student b)
{
	if(a.level==b.level)
	{
		if((a.de+a.cai)==(b.cai+b.de))
		{
			if(a.de==b.de)
			{
				return a.id<b.id;
			}
			else
			{
				return a.de>b.de;
			}
		}
		else
			return a.de+a.cai>b.cai+b.de;
	}
	else
		return a.level>b.level;
}




struct student s[100010];

int main()
{
	int M,L,H;
	int count=0;
	cin>>M>>L>>H;
	for(int i=0;i<M;i++)
	{
		cin>>s[i].id;
		cin>>s[i].de;
		cin>>s[i].cai;
		if(s[i].cai>=H&&s[i].de>=H)
		{
			s[i].level=5;
			count++;
		}
		else if(s[i].cai>=L&&s[i].de>=H)
			{
				s[i].level=4;
				count++;
			}
		else if(s[i].cai>=L&&s[i].de>=L&&s[i].de>=s[i].cai)
		{
			s[i].level=3;
			count++;
		}
		else if(s[i].cai>=L&&s[i].de>=L)
		{
			s[i].level=2;
			count++;
		}
		else
			s[i].level=1;
					
	}
	sort(s,s+M,cmp);
	cout<<count<<endl;
	for(int i=0;i<M;i++)
	{
		if(s[i].level!=1)
		{
			cout<<s[i].id<<" ";
			cout<<s[i].de<<" ";
			cout<<s[i].cai<<endl;
		}
	}
	
	
}
