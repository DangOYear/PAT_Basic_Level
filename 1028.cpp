#include<stdio.h>
#include<string.h>


struct person{
	char name[6];
	int year;
	int month;
	int day;
};

bool cmp(struct person a,struct person b){
	if(a.year!=b.year)	return a.year>=b.year;
	if(a.month!=b.month)	return a.month>=b.month;
		return a.day>=b.day;
	
}



struct person old,young,temp,left,right;

int main(){
	
	left.year=1814;
	left.month=9;
	left.day=6;
	
	young.year=1814;
	young.month=9;
	young.day=6;
	
	right.year=2014;
	right.month=9;
	right.day=6;
	
	old.year=2014;
	old.month=9;
	old.day=6; 
	
	int num=0;
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s%d/%d/%d",temp.name,&temp.year,&temp.month,&temp.day);
		if(cmp(temp,left)&&cmp(right,temp)){

			num++;
			if(cmp(old,temp))	old=temp;
			if(cmp(temp,young))	young=temp;
		}
			
	}
	if(num==0)
		printf("0");
	else
		printf("%d %s %s",num,old.name,young.name);
	
	
}
