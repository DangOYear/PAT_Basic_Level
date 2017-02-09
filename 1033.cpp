#include<iostream>
#include<string>
using namespace std;

int  brokenKey[257];

bool isAlpha(char c){
    if(c<='Z'&&c>='A')
        return true;
    return false;
}


int main(){
    string broken;
    string type;
    string r;
    getline(cin,broken);
    getline(cin,type);
    cin>>type;
    for(int i=0;i<broken.length();i++) {
        brokenKey[broken[i]]=1;
        if(isAlpha(broken[i])){
            brokenKey[broken[i]-('A'-'a')]=1;
        }
        if(broken[i]=='+'){
            for(int j='A';j<='Z';j++){
                brokenKey[j]=1;
            }
        }
    }
    for(int i=0;i<type.length();i++){   
        if(brokenKey[type[i]])  continue;

        r+=type[i];
    }
    cout<<r<<endl;

}
