//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdio>
using namespace std;

int isLegal(char c){
    if (c == '.')
        return 1;
    if (c <= '9' && c >= '0')
        return 2;
    if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
        return 3;
    return 0;
}

void Tips(char reply){
    switch (reply){
        case 'A':
            cout << "Your password is tai duan le."<< endl;
            break;
        case 'B':
            cout << "Your password is tai luan le."<< endl;
            break;
        case 'C':
            cout << "Your password needs shu zi."<< endl;
            break;
        case 'D':
            cout << "Your password needs zi mu."<< endl;
            break;
        default:
            cout << "Your password is wan mei." << endl;
    }
}

int main(){
    char reply;
    reply = 'Z';
    string passwd;
    //bool islegal = true;
    //bool isShort = false;
    bool haveDigit = false;
    bool haveAlpha = false;
    //bool
    int N;
    cin>>N;
    getchar();
    for (int i = 0; i < N; ++i) {
        getline(cin,passwd);
        //cout << passwd << endl;
        haveDigit = false;
        haveAlpha = false;
        reply = 'Z';
        if (passwd.length() < 6){
            reply = 'A';
            Tips(reply);
            continue;
        }
        for (int j = 0; j < passwd.length(); ++j) {
            if (isLegal(passwd[j]) == 0){
                reply = 'B';
                haveDigit = false;
                haveAlpha = false;
                break;
            }
            if (isLegal(passwd[j]) == 2)
                haveDigit = true;
            if (isLegal(passwd[j]) == 3)
                haveAlpha = true;
        }

        if(haveAlpha && !haveDigit){
            reply = 'C';
        }
        if(!haveAlpha && haveDigit){
            reply = 'D';
        }
        Tips(reply);
    }

}