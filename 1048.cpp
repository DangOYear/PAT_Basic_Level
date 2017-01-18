#include<cstdio>
#include<string.h>

#define MAX_N 120

char a[MAX_N],b[MAX_N],c[MAX_N];
char p[]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'}; 
char ans[MAX_N];

void reverse(char s[]){
	int l=strlen(s);
	for(int i=0;i<l/2;i++){
		char temp=s[i];
		s[i]=s[l-1-i];
		s[l-i-1]=temp;
	}
}


int main(){
	scanf("%s %s",a,b);
	reverse(a);
	reverse(b);
	int la=strlen(a);
	int lb=strlen(b);
	
	int len=la>lb?la:lb;
	for(int i=0;i<len;i++){
		int na=i<la?a[i]-'0':0;
		int nb=i<lb?b[i]-'0':0;
		if(i%2==0){
			ans[i]=p[(na+nb)%13];
		}
		else{
			int temp=nb-na;
			if(temp<0)	temp+=10;
			ans[i]=temp+'0';
		} 
	}
	reverse(ans);
	puts(ans);
} 
