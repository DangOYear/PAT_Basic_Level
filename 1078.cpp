//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


string Compression(string s){
    string res = "";
    int num = 1;
    for (int i = 0; i < s.length(); i++){
        num = 1;
        while((i+1) < s.length() && s[i] == s[i+1]){
            num++;
            i++;
        }
        if(num > 1){
            string str = to_string(num);
            res += str;
            res += s[i];

        }else{
            res += s[i];
        }
    }
    return res;
}

string Decompression(string s){
    string res = "";
    string str2 = "";
    for (int i = 0; i < s.length(); ++i) {
        //pre = i;
        str2.clear();
        while(s[i] <= '9' && s[i] >= '0'){
            str2 += s[i];
            i++;
        }
        if (str2.length()){
            int len = stoi(str2);
            for (int j = 0; j < len; ++j) {
                res += s[i];
            }
        }else{
            res += s[i];
        }

    }
    return res;
}

int main(){
    char choice;
    string res;
    string str;
    cin>>choice;
    getchar();
    getline(cin,str);
    //cout << str <<endl;
    switch (choice){
        case 'C':
            res = Compression(str);
            break;
        case 'D':
            res = Decompression(str);
            break;
    }
    cout << res << endl;
}