#include<iostream>
#include<string>
#include<vector>
using namespace std;


vector<string> Get(string s){
	vector<string> v;
	string temp="";
	v.push_back(temp);//填入一个空串使得标号从1开始 
	bool flag=false;
	for(int i=0;i<s.length();i++){
		if(s[i]=='['){
			flag=true;
		}else {
			if(s[i]==']'){
				v.push_back(temp);
				flag=false;
				temp="";
			}
			else if(flag){
				temp+=s[i];
			}
		}
	}
	return v;
}

int main(){
	string s;
	getline(cin,s);
	vector<string> hand=Get(s);
	getline(cin,s);
	vector<string> eye=Get(s);
	getline(cin,s);
	vector<string> mouth=Get(s);
	int k;
	cin>>k;
	int expre[5];
	for(int i=0;i<k;i++){
		for(int j=0;j<5;j++){
			cin>>expre[j];
		}
		
		if(expre[0]>=hand.size()||expre[0]<1||expre[4]>=hand.size()||expre[4]<1||expre[1]>=eye.size()||expre[1]<1||expre[3]>=eye.size()||expre[3]<1||expre[2]>=mouth.size()||expre[2]<1){
				cout<<"Are you kidding me? @\\/@"<<endl;
				continue;
		}	
		
		cout<<hand[expre[0]]<<"("<<eye[expre[1]]<<mouth[expre[2]]<<eye[expre[3]]<<")"<<hand[expre[4]]<<endl;
		
	}
	
}
