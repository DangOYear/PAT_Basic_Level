#include<string.h>
#include<stdio.h>
using namespace std;


#define MAX_M 110
#define MAX_N 1100 

struct Q{
	int score;
	
	char ans[6];
}q[MAX_M];

int grade[MAX_N];
int wrong[MAX_M];


int main(){
	int n,m;
	int gs;
	scanf("%d%d",&n,&m);
	int temp;
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&q[i].score,&gs,&temp);
		
		for(int j=0;j<temp;j++){
			scanf(" %c",&q[i].ans[j]);
		}
		q[i].ans[temp]='\0';
	}
	
	getchar();
	
	int num;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			getchar();
			scanf("%d",&num);
			char answer[num+1];
			for(int k=0;k<num;k++){
				scanf(" %c",&answer[k]);
			}
			answer[num]='\0';
			getchar();
			getchar();
			if(strcmp(q[j].ans,answer)==0){
				grade[i]+=q[j].score;
			}
			else{
				wrong[j]++;
			}
		}
	}
	int max=-1;
	for(int i=0;i<m;i++){
		if(wrong[i]>max){
			max=wrong[i];
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",grade[i]);
	}
	if(max==0){
		printf("Too simple");
	}
	else{
		printf("%d",max);
		for(int i=0;i<m;i++){
			if(wrong[i]==max){
				printf(" %d",i+1);
			}
		}
	}
	
}
