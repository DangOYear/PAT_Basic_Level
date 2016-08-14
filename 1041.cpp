#include<iostream>
#include<string>
using namespace std;

#define MAX_N 1005

struct sitting{
	string id;
	int try_num;
	int exam_num;
};

struct sitting sit[MAX_N];


int main(){
	int N;
	int M;
	int search;
	cin>>N;
	
	
	for(int i=0;i<N;i++){
		cin>>sit[i].id>>sit[i].try_num>>sit[i].exam_num;
	}
	cin>>M;
	for(int i=0;i<M;i++){
		cin>>search;
		for(int j=0;j<N;j++){
			if(sit[j].try_num==search){
				cout<<sit[j].id<<" "<<sit[j].exam_num<<endl;
				break;
			}
		}
		
	}
	
}
