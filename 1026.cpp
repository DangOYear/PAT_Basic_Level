#include<iostream>
using namespace std;


void print(int num){
	if(num<=9)	cout<<"0";
	cout<<num;
}

int main(){
	int a,b;
	int c;
	int hour=0;
	int minute=0;
	int second=0;
	cin>>a>>b;
	c=((b-a)+50)/100;
	
	second=c%60;
	minute=c/60%60;
	hour=c/3600;
	
	print(hour);
	cout<<":";
	print(minute);
	cout<<":";
	print(second);
}
