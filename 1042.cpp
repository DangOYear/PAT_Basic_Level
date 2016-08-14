#include<stdio.h>
#include<string.h>

int num[26];
char s[1006];

void compute(int n){
	if(s[n]>='a'&&s[n]<='z')
		num[s[n]-'a']++;
	if(s[n]>='A'&&s[n]<='Z'){
		num[s[n]-'A']++;
	}
}



int main(){
	int l;
	int max=0,max_i=0;
	gets(s);
	l=strlen(s);
	for(int i=0;i<l;i++){
		compute(i);
	}
	for(int i=0;i<26;i++){
		if(num[i]>max){
			max=num[i];
			max_i=i;
		}
	}
	
	printf("%c %d",(int)'a'+max_i,num[max_i]);
	
}
