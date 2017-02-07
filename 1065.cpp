#include<stdio.h>
#include<vector>
#define MAX_N 100100
#include<algorithm>

using namespace std;
struct P{
	int partner;
	P(){
		partner=-1;
	}
}p[MAX_N];

vector<int> v,res;
bool visited[MAX_N]={false};



int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int temp1,temp2;
		scanf("%d%d",&temp1,&temp2);
		p[temp1].partner=temp2;
		p[temp2].partner=temp1;
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int num;
		scanf("%d",&num);
		visited[num]=true;
		v.push_back(num);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		if(p[v[i]].partner==-1)	res.push_back(v[i]);
		else if(visited[p[v[i]].partner]==false){
			res.push_back(v[i]);
		}
	}
	printf("%d\n",res.size());
	for(int i=0;i<res.size();i++){
		printf("%05d",res[i]);
		if(i!=res.size()-1){
			printf(" ");
		}
	}

}

