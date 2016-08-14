#include<iostream>
using namespace std;


#define MAX_N 100005

int a[MAX_N];


int main(){
	int N;
	int num,score;
	int  max_num=0;
	int max=0;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>num>>score;
		a[num]+=score;
	}
	for(int i=1;i<=N;i++){
		if(a[i]>=max){
			max=a[i];
			max_num=i;
		}
	}
	cout<<max_num<<" "<<max;
	
}
