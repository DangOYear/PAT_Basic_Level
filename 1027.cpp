#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int N;
	char c;
	int used;
	cin>>N;
	cin>>c;
	int x=(int)sqrt(2.0*(N+1))-1;
	if(x%2==0)	x-=1;
	used=(x+1)*(x+1)/2-1;
	
	for(int i=x;i>=1;i-=2){
		for(int j=0;j<(x-i)/2;j++){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<c;
		}
		cout<<endl;
	}
	
	for(int i=3;i<=x;i+=2){
		for(int j=0;j<(x-i)/2;j++){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<c;
		}
		cout<<endl;
	}
	cout<<N-used<<endl;
}
