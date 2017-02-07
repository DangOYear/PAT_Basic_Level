#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char str[110][1100];

int main(){
	int n;
	int count=0;
	double average=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		bool isNumber=true;
		int dot=0;
		int dotnum=0;
		scanf("%s",str[i]);
		int len=strlen(str[i]);
		
		for(int j=0;j<len;j++){
			if(dot==1)	dotnum++;
			
			if(str[i][j]=='-'&&j!=0){
				isNumber=false;
				break;
			}
			if(str[i][j]=='.'){
				dot++;
			}
			else{
				if((str[i][j]<'0'||str[i][j]>'9')&&(str[i][j]!='-')){
					isNumber=false;
					break;
				}
			}
			
			if(dot>=2||dotnum>=3){
				isNumber=false;
				break;
			}	
		}
		
		double num=atof(str[i]);
		if(num>1000||num<-1000){
			isNumber=false;
		}
		
		if(isNumber){
			count++;
			average+=num;
		}
		else{
			printf("ERROR: %s is not a legal number\n",str[i]);
		}
		
	}
	if(count==0)
		printf("The average of 0 numbers is Undefined");
	else if(count==1)
			printf("The average of %d number is %.2f",count,average);
	else 
		printf("The average of %d numbers is %.2f",count,average/count);
		
	
}
