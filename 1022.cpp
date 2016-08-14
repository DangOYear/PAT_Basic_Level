#include<iostream>
using namespace std;

int ans[32];

int main(){
	int a,b,d;
	int num=0;
	
	cin>>a>>b>>d;
	int sum=a+b;
	
	do{
		ans[num++]=sum%d;
		sum=sum/d;
	}while(sum>0);
	
	for(int i=num-1;i>=0;i--){
		cout<<ans[i];
	}
}
