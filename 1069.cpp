//
// Created by ShengyunYu on 2019/1/16.
//

#include<iostream>
#include<map>
#include<vector>

using namespace std;


map<string,int> count;
vector<string> v;
int m,n,s;

int main(){
    string name;
    cin>>m>>n>>s;
    v.push_back("");
    for(int i=0;i<m;i++){
        cin>>name;
        v.push_back(name);
    }
    if(s>m){
        cout<<"Keep going..."<<endl;
    }
    else{
        for(int i=s;i<=m;i=i+n){
            while(count[v[i]]>=1){
                i++;
            }
            count[v[i]]++;
            cout<<v[i]<<endl;
        }
    }
}
