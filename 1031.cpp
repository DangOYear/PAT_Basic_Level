#include<iostream>
#include<string>
#include<vector>
#define MAX_N 101

using namespace std;

int N;
vector <string> v;

char map[11]={'1','0','X','9','8','7','6','5','4','3','2'};
int mark[101];
int value[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};

bool check(int i){
	int num=0;
	for(int j=0;j<17;j++){
		num+=value[j]*(v[i][j]-'0');
	}
	num%=11;
	if(map[num]==v[i][17])
		return true;
	else
		return false;
}


int main(){
	cin>>N;
	string s;
	bool flag=true;
	//int count=0;
	
	for(int i=0;i<N;i++){
		cin>>s;
		v.push_back(s);
	}
	for(int i=0;i<N;i++){
		if(!check(i)){
			flag=false;
			mark[i]=1;
		}
	}
	if(flag){
		cout<<"All passed"<<endl;
	}
	else{
		//cout<<count<<endl;
		for(int i=0;i<N;i++){
			if(mark[i]==1){
				cout<<v[i]<<endl;
			}
		}
	}
	
	
}
