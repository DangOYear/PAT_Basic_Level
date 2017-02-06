#include<stdio.h>



int main(){
	int n;
	int m;
	double e,k;
	int count=0;
	int d;
	bool flag=false;
	int count1=0;
	int count2=0;
	scanf("%d%lf%d",&n,&e,&d);
	for(int i=0;i<n;i++){
		count=0;
		flag=false;
		scanf("%d",&m);
		for(int j=0;j<m;j++){
			scanf("%lf",&k);
			if(k<e){
				count++;
			}
		}
		if(count>m/2){
			count1++;
			flag=true;
		}
		
		if(m>d&&flag){
			count2++;
			count1--;
		}
	}
	double ans1=(double)count1/n*100;
	double ans2=(double)count2/n*100;
	printf("%.1f%% %.1f%%",ans1,ans2);
}
