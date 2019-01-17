//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
#include <cmath>
#include <set>


using namespace std;

int res(int num){
    double d = (double)num;
    return int(floor(d / 2) + floor(d / 3) + floor(d / 5));
}

int main(){
    int N;
    set<int> s;
    cin>>N;
    for (int i = 1; i <= N; ++i) {
        int num = res(i);
        s.insert(num);
    }
    cout << s.size() << endl;
}