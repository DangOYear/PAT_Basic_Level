#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int num[101],mark[101];
int K;

bool cmp(int a,int b){
	return a>b;
}

void check(int i){
	int n=num[i];
	while(n!=1){
		if(n%2==0){
			n=n/2;
		}
		else{
			n=(3*n+1)/2;
		}
		for(int j=0;j<K;j++){
			if(n==num[j])
				mark[j]=1;
		}
	}
}

int main(){
	
	memset(mark,0,sizeof(mark));
	int sort_num[101];
	int number=0;

	cin>>K;
	for(int i=0;i<K;i++){
		cin>>num[i];
	}
	
	for(int i=0;i<K;i++){
		if(mark[i]==0)
			check(i);
	}
	
	for(int i=0;i<K;i++){
		if(mark[i]==0){
			sort_num[number]=num[i];
			number++;
		}
		
	}
	sort(sort_num,sort_num+number,cmp);
	for(int i=0;i<number-1;i++){
		cout<<sort_num[i]<<" ";
	}
	cout<<sort_num[number-1];
	
}
