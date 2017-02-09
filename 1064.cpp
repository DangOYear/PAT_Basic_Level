#include<iostream>
#include<set>
using namespace std;

int sum(int n){
    int count=0;
    while(n>0){

        count+=n%10; 
        n/=10;
    }
    return count;
}


int main(){
    int N;
    int num;
    set<int> s;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num;
        s.insert(sum(num));
    }
    cout<<s.size()<<endl;
    set<int >::iterator it,it1;
    for(it1=it=s.begin();it!=s.end();it++){
        cout<<*it;
        it1++;

        if((it1)!=s.end())cout<<" ";
    }
     //cout<<"aa";
} 
