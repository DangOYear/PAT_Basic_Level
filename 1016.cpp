#include<iostream>
#include<string>
using namespace std;

int main(){
	string sa,sb;
	char a,b;
	int c,d;
	int counta=0,countb=0;
	
	cin>>sa>>a>>sb>>b;
	c=a-'0';
	d=b-'0';
	for(int i=0;i<sa.length();i++){
		if(sa[i]==a){
			counta=counta*10+c;
		}
	}
	
	for(int i=0;i<sb.length();i++){
		if(sb[i]==b){
			countb=countb*10+d;
		}
	}
	cout<<counta+countb;
}
