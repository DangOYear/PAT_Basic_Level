//
// Created by ShengyunYu on 2019/1/16.
//

#include<iostream>
using namespace std;


int main(){
    string passwd,input;
    int n;
    cin>>passwd>>n;
    getchar();
    int count=0;
    while(true){
        getline(cin,input);
        if(input=="#"){
            break;
        }
        count++;
        if(input==passwd){
            cout<<"Welcome in";
            break;
        }
        if(input!=passwd){
            cout<<"Wrong password: "<<input<<endl;
        }
        if(count==n){
            cout<<"Account locked";
            break;
        }
    }
}
