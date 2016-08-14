#include<iostream>
#include<string>
using namespace std;


int pose_a[3];//0 C 1 J 2 B
int pose_b[3];//


int tie;
char c[]={'C','J','B'};

void check(char a,char b){
	switch(a){
		case 'C':if(b=='C')	tie++;
				if(b=='J')	pose_a[0]++;
				if(b=='B')	pose_b[2]++;	break;
		case 'J':if(b=='C')	pose_b[0]++;
				if(b=='J')	tie++;
				if(b=='B')	pose_a[1]++;	break;
		case 'B':if(b=='C')	pose_a[2]++;
				if(b=='J')	pose_b[1]++;	
				if(b=='B')	tie++;			break;
	}
}


int main()
{
	int N;
	char a,b;
	int a_win=0,b_win=0;
	int max_a=0,max_b=0;
	int max_a_i=0,max_b_i=0;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a>>b;
		check(a,b);
	}
	for(int i=0;i<3;i++){
		a_win+=pose_a[i];
		if(pose_a[i]>max_a||(pose_a[i]==max_a&&c[i]<=c[max_a_i])){
			max_a=pose_a[i];
			max_a_i=i;
		}
		b_win+=pose_b[i];
		if(pose_b[i]>max_b||(pose_b[i]==max_b&&c[i]<=c[max_b_i])){
			max_b=pose_b[i];
			max_b_i=i;
		}
	}
	cout<<a_win<<" "<<tie<<" "<<b_win<<endl;
	cout<<b_win<<" "<<tie<<" "<<a_win<<endl;
	cout<<c[max_a_i]<<" "<<c[max_b_i];
}
