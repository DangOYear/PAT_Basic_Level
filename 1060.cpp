#include<iostream>
#include<algorithm>
using namespace std;

#define MAX_N 10010

int N;
int a[MAX_N];

bool cmp(int a,int b){
	return a>b;
}


int main(){
	int i;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	
	sort(a,a+N,cmp);
	
	for(i=0;i<N;i++){
		
		if(a[i]<=i+1)
			break;
	}
	cout<<a[i];
}
