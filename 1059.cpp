#include<iostream>
#include<map>
#include<math.h>
using namespace std;

int stu[10010];

bool isPrime(int num){
	int m=sqrt(num);
	for(int i=2;i<=m;i++){
		if(num%i==0)	return false;
	}
	return true;
}

int main(){
	int N;
	int searchnum;
	int search;
	int num;
	//string s[3]={"","","",""};
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>num;
		stu[num]=i;
	}
	
	cin>>search;
	while(search--){
		cin>>searchnum;
		if(searchnum<10)	cout<<"000";
		if(searchnum<100&&searchnum>=10)	cout<<"00";
		if(searchnum<1000&&searchnum>=100)	cout<<"0";
		if(stu[searchnum]==1){
			cout<<searchnum<<": Mystery Award"<<endl;
			stu[searchnum]=-1;
			continue;
		}
		if(stu[searchnum]==-1){
			cout<<searchnum<<": Checked"<<endl;
			stu[searchnum]=-1;
			continue;
		}
		
		if(stu[searchnum]==0){
			cout<<searchnum<<": Are you kidding?"<<endl;
			//stu[searchnum]=-1;
			continue;
		}
		
		if(isPrime(stu[searchnum])){
			cout<<searchnum<<": Minion"<<endl;
			stu[searchnum]=-1;
			continue;
		}
		cout<<searchnum<<": Chocolate"<<endl;
		stu[searchnum]=-1;
	}
	
}
