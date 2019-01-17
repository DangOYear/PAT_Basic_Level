//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
#include <map>

using namespace std;


int main(){
    string A,B;
    string res = "";
    map<char ,int> m;
    getline(cin,A);
    getline(cin,B);
    //cout<<A<<endl;
    //cout<<B<<endl;
    for(int i = 0;i < A.size(); ++i){
        if(!m[A[i]]){
            res += A[i];
            m[A[i]] = 1;
        }
    }
    for(int i = 0;i < B.size(); ++i){
        if(!m[B[i]]){
            res += B[i];
            m[B[i]] = 1;
        }
    }
    cout << res << endl;
}