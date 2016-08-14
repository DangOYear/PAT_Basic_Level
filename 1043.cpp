#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int num[6];

char c[6]={'P','A','T','e','s','t'};
void count(string s){
	
	for(int i=0;i<s.length();i++){
		for(int j=0;j<6;j++){
			if(s[i]==c[j])
				num[j]++;
		}
	}
}


int main()
{
	string s;
	int max=0;
	cin>>s;
	count(s);
	for(int i=0;i<6;i++){
		if(num[i]>max)
			max=num[i];
	}
	for(int j=0;j<max;j++){
		for(int i=0;i<6;i++){
			if(num[i]!=0){
				cout<<c[i];
				num[i]--;
			}
		}
	}
	
}
