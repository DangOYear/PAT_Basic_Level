#include<iostream>
#include<algorithm>
using namespace std;

struct Student{
	string name;
	string ID;
	int score;
};

bool cmp(struct Student a,struct Student b)
{
	return a.score>b.score;
}

int main()
{
	struct Student s[1000];
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>s[i].name;
		cin>>s[i].ID;
		cin>>s[i].score;
	}
	sort(s,s+N,cmp);
	cout<<s[0].name<<" "<<s[0].ID<<endl;
	cout<<s[N-1].name<<" "<<s[N-1].ID<<endl;
	
}
