#include<stdio.h>

int team[1001];

int main(){
	int N,i;
	int teamnum,teammember,score;
	
	int max=0,max_i=0;
	
	scanf("%d",&N);
	while(N--){
		scanf("%d-%d%d",&teamnum,&teammember,&score);
		team[teamnum]+=score;
	}
	
	for(i=1;i<=1000;i++){
		if(team[i]>max){
			max=team[i];
			max_i=i;
		}
	}
	printf("%d %d",max_i,team[max_i]);
	
	
}
