#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string s;
	long long sum=0;
	int count[2]={0,0};
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i]<='Z'&&s[i]>='A') sum+=s[i]-'A'+1;
		if(s[i]<='z'&&s[i]>='a') sum+=s[i]-'a'+1;
	}
	while(sum){
		if(sum%2==1)	count[1]++;
		else	count[0]++;
		
		sum/=2;
	}
	cout<<count[0]<<" "<<count[1];
}
