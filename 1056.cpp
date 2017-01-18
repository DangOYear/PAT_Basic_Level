#include<iostream>
using namespace std;

int main(){
	int N;
	int num;
	int sum=0;
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin>>num;
		sum+=(N-1)*10*num+(N-1)*num;
	}
	
	cout<<sum<<endl;
}
