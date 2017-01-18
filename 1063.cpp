#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
	int N;
	double a,b;
	double max=0;
	cin>>N;
	while(N--){
		cin>>a>>b;
		double temp=sqrt(pow(a,2)+pow(b,2));
		if(temp>max){
			max=temp;
		}
	}
	//max+=0.005;
	cout<<fixed<<setprecision(2)<<max;
}
