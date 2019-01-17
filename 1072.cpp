//
// Created by ShengyunYu on 2019/1/16.
//

#include <iostream>
//#include <cstdio>
#include <map>
using namespace std;


int main(){
    int N,M,K;
    string name,number;
    map<string,int> m;

    cin>>N>>M;
    for (int i = 0; i < M; ++i) {
        string s;
        cin>>s;
        m[s] = 1;
    }
    int stu_num = 0;
    int goods_num = 0;
    for (int i = 0; i < N; i++){
        bool flag = false;
        cin>>name>>K;
        for (int j = 0; j < K; ++j) {
            cin>>number;
            if (m[number]){
                if (!flag){
                    cout<<name<<":";
                    flag = true;
                }
                cout <<" "<<number;
                goods_num++;
            }
        }
        if (flag){
            stu_num++;
            cout<<endl;
        }
    }
    cout << stu_num <<" " <<goods_num << endl;
}

