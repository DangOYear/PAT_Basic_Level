#include<stdio.h>
#include<string.h>

#define MAX_N 110


int main(){
	int n;
	char str[MAX_N];
	scanf("%d",&n);
	getchar();
	for(int k=0;k<n;k++){
		int count_p=0,count_t=0,other=0;
		int pos_p=0,pos_t=0;
		gets(str);
		int len=strlen(str);
		for(int i=0;i<len;i++){
			if(str[i]=='P'){
				count_p++;
				pos_p=i;
			}
			else if(str[i]=='T'){
				count_t++;
				pos_t=i;
			}else if(str[i]!='A')	other++;
		}
		if(count_p!=1||count_t!=1||other!=0||(pos_t-pos_p<=1)){
			printf("NO\n");
			continue;
		}
		int x=pos_p,y=pos_t-pos_p-1,z=len-pos_t-1;
		if(z-(y-1)*x==x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		
	} 
}
