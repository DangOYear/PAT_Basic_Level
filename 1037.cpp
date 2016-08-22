#include<stdio.h>
#include<math.h>

int main(){
	int a1,a2,a3;
	int b1,b2,b3;
	int P;
	int A;
	int change;
	scanf("%d.%d.%d %d.%d.%d",&a1,&a2,&a3,&b1,&b2,&b3);
	P=a1*17*29+a2*29+a3;
	A=b1*17*29+b2*29+b3;
	change=A-P;
	if(change<0){
		printf("-");
		change=-change;
	}
	
	printf("%d.%d.%d",change/(29*17),change%(29*17)/29,change%29);

	
}
