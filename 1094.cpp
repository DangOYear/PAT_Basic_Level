//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(int num){
    if (num == 0 || num == 1)
        return false;
    int m = sqrt(num);
    for (int i = 2; i <= m; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}


int main(){
    int L, K;
    string str1,str2;
    cin>>L>>K;
    cin>>str1;
    int i;
    int num;
    for(i = 0; i <= L - K; ++i){
        str2 = str1.substr(i, K);
        num = stoi(str2);
        if (isPrime(num)){
            cout << str2;
            break;
        }
    }
    if (i == L - K + 1 || K > L)
        cout << "404";
}