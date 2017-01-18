#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;


struct com{
	double r;
	double v;
};




int main(){
	double R1,P1,R2,P2;
	struct com c1,c2,c3;
	cin>>R1>>P1>>R2>>P2;
	c1.r=R1*cos(P1);
	c1.v=R1*sin(P1);
	
	c2.r=R2*cos(P2);
	c2.v=R2*sin(P2);
	
	c3.r=c1.r*c2.r-c1.v*c2.v;
	c3.v=c1.r*c2.v+c1.v*c2.r;
	
	if(fabs(c3.r)<0.01)	c3.r=fabs(c3.r);
	
	if(fabs(c3.v)<0.01)	c3.v=fabs(c3.v);
	
	cout<<fixed<<setprecision(2)<<c3.r;
	if(c3.v>0)	cout<<"+";
	cout<<fixed<<setprecision(2)<<c3.v<<"i";
	
}
