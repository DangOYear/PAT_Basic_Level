#include<iostream>
#include<vector>
using namespace std;



int main()
{
	vector<string> v_s;
	string s;
	int i;
	while(cin>>s)
	{
		v_s.push_back(s);
	}
	for(i=v_s.size()-1;i>0;i--)
	{
		cout<<v_s[i]<<" ";
	}
	cout<<v_s[0]<<endl;
}
