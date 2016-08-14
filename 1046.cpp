#include<iostream>
using namespace std;

int main(){
	int N;
	int count_a=0;
	int count_b=0;
	int a_say,a_do,b_say,b_do;
	cin>>N;


	for(int i=0;i<N;i++){
		cin>>a_say>>a_do>>b_say>>b_do;
		if((a_do==(a_say+b_say))&&(b_do!=(a_say+b_say)))
			{count_b++;continue;}
		if(b_do==a_say+b_say&&(a_do!=(a_say+b_say)))	
			count_a++;
	}
	cout<<count_a<<" "<<count_b;
}
