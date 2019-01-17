//
// Created by ShengyunYu on 2019/1/17.
//


#include <iostream>


using namespace std;

int main(){
    int A,B;
    int product;
    bool flag = false;
    cin>>A>>B;
    product = A * B;
    while(product > 0){
        if (product % 10 != 0)
            flag = true;
        if (flag)
            cout << product % 10;
        product /= 10;
    }
}