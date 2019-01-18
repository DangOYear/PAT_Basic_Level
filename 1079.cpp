//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

bool isPalindromic(string s){
    int head = 0;
    int tail = s.length() - 1;
    while (head < tail){
        if (s[head] != s[tail])
            return false;
        head++;
        tail--;
    }
    return true;
}

string add(string s, string &r){
    r = s;
    string res = "";
    reverse(r.begin(), r.end());
    int carry = 0;
    for (int i = 0; i < s.length(); ++i) {
        int num = s[i] - '0' + r[i] - '0' + carry;
        carry = 0;
        if (num >= 10){
            carry = num / 10;
            num %= 10;
        }
        res += (char)(num + '0');
    }
    if (carry >= 1)
        res += '1';
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    string s,r;
    string res;
    cin >> s;
    if (isPalindromic(s)){
        cout << s << " is a palindromic number.";
        return 0;
    }
    bool flag = false;
    for (int i=0; i < 10; i++){
        string res = add(s,r);
        cout << s << " + " << r << " = " << res <<endl;
        s = res;
        if (isPalindromic(s)){
            flag = true;
            break;
        }

    }
    if (flag){
        cout << s << " is a palindromic number.";
    } else{
        cout << "Not found in 10 iterations.";
    }
}