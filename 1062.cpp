#include<stdio.h>

struct fenshu{
	int fenzi;
	int fenmu;
};

bool cmp(struct fenshu a,struct fenshu b){
	return a.fenzi*b.fenmu>a.fenmu*b.fenzi;
}

int gcd(int a,int b){
	if(b%a==0)	return a;
	else return gcd(b,a%b);
}

int main(){
	struct fenshu a,b,c;
	int num;
	int n[1010];
	int count=0;
	scanf("%d/%d %d/%d %d",&a.fenzi,&a.fenmu,&b.fenzi,
			&b.fenmu,&num);
	if(cmp(a,b)){
		struct fenshu temp;
		temp=a;
		a=b;
		b=temp;
	}
	c.fenmu=num;
	
	for(c.fenzi=1;c.fenzi<=c.fenmu-1;c.fenzi++){
		if(cmp(c,a)&&cmp(b,c)){
			if(gcd(c.fenmu,c.fenzi)==1){
				n[count++]=c.fenzi;
			}
		}
		else{
			continue;
		}
	}
	
	for(int i=0;i<count;i++){
		
		printf("%d/%d",n[i],c.fenmu);
		
		if(i!=count-1)	printf(" ");
	}
	
	
	
}
