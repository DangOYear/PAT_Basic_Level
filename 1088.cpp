//
// Created by ShengyunYu on 2019/1/18.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string cmp(double a, double b){
    string res = "";
    if (a == b){
        res = " Ping";
    } else{
        if(a > b){
            res = " Gai";
        } else{
            res = " Cong";
        }
    }
    return res;
}

int main(){
    int M,X,Y;
    int jia,yi;
    double bing;

    bool flag = false;
    cin>>M>>X>>Y;
    //遍历
    for (int i = 99; i >= 10; i--){
        int j = (i % 10) * 10 + (i / 10);
        double s = 1.0 * abs(i - j) / X;
        if(s * Y == j){
            jia = i;
            yi = j;
            bing = (double)j / Y;
            flag = true;
            break;
        }
    }
    if (flag){
        cout << jia << cmp(M,jia) << cmp(M,yi) << cmp(M,bing) << endl;
    } else{
        cout << "No Solution" << endl;
    }
}