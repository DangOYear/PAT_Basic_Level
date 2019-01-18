//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    int N;
    int num;
    map<int,int> m;
    vector<int> v;
    cin>>N;
    for (int i = 1; i <= N; ++i) {
        cin>>num;
        int dev = abs(num - i);
        if (m[dev] == 1)
            v.push_back(dev);
        m[dev]++;
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i < v.size(); i++){
        cout << v[i] <<" " <<m[v[i]] <<endl;
    }
}
