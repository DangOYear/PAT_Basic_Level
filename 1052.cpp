#include<iostream>
#include<vector>
using namespace std;

vector <string> v;

//[¨r][¨q][o][~\][/~][<][>]
//[¨s][¨t][^][-][=][>][<][@][¡Ñ]
//[§¥][¨Œ][_][¦Å][^]

int main(){
	string s,s1;
	for(int i=0;i<3;i++){
		cin>>s;
		for(int j=0;j<s.length();j++){
			if(s[i]!='['&&s[i]!=']')
				s1+=s[i];
		}
		cout<<s1<<endl;
		v.push_back(s1);
	}
}
