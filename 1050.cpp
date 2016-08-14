#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;



int a[10010];
int b[110][110];

bool cmp(int a,int b){
	return a>b;
}

int cur;
int n,m;

void screwMatrix(int A,int B){
	if(B>=(n+1)/2)	return ;
	for(int j=A;j<n-A;j++){
		b[B][j]=a[cur];
		cur++;
	}
	for(int i=B+1;i<m-B;i++){
		b[i][n-A-1]=a[cur];
		cur++;
	}
	for(int i=n-A-2;i>=A;i--){
		b[m-B-1][i]=a[cur];
		cur++;
	}
	for(int i=m-B-2;i>B;i--){
		b[i][A]=a[cur];
		cur++;
	}
	screwMatrix(A+1,B+1);
}

int main(){
	int N;
	cin>>N;
	int s=(int)sqrt(N);
	for(int i=1;i<s;i++){
		if(N%i==0)
			n=i;
	}
	m=N/n;
	cout<<n<<" "<<m<<endl;
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	sort(a,a+N,cmp);
	cur=0;
	screwMatrix(0,0);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<b[i][j];
			if(j!=n-1)	cout<<" ";
		}
		cout<<endl;
	}
}
