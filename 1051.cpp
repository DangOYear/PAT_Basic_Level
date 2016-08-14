#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

struct Complex{
	double a;
	double b;
};

void print(struct Complex c){
	cout<<fixed<<setprecision(2)<<c.a;
	if(c.b>=0){
		cout<<"+";
	}
	cout<<fixed<<setprecision(2)<<c.b<<"i";
}


int main(){
	double R,P;
	struct Complex c1,c2,c3;
	cin>>R>>P;
	c1.a=R*cos(P);
	c1.b=R*sin(P);
	cin>>R>>P;
	c2.a=R*cos(P);;
	c2.b=R*sin(P);
	
	c3.a=c1.a*c2.a-c1.b*c2.b;
	c3.b=c1.a*c2.b+c2.a*c1.b;
	print(c3);
	
}
