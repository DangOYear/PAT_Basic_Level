#include<stdio.h>
#include<math.h>
#include<algorithm>



int N;
int m,n;
#define MAX_N 11000

int a[MAX_N][MAX_N];
int num[MAX_N];

bool cmp(int a,int b){
	return a>b;
}

void cal_m_n(){
	int sqt=(int)sqrt(N);
	for(int i=1;i<=sqt;i++){
		if(N%sqt==0)
			n=i;
	}
	m=N/n;
}

void print(){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",a[i][j]);
			if(j!=n-1)
				printf(" ");
		}
		printf("\n");
	}
}

void solve(int x,int y,){
	 
}

int main(){
	
	scanf("%d",&N);
	cal_m_n();
	for(int i=0;i<N;i++){
		scanf("%d",&num[i]);
	}
	
	sort(a,a+N,cmp);
	
	//printf("%d %d",m,n);
	solve(0,0);
	print();
}
