//
// Created by ShengyunYu on 2019/1/16.
//

#include <iostream>

using namespace std;

int main(){
    int T,K;
    cin>>T>>K;
    int n1,b,t,n2;
    for(int i = 0; i < K; i++){
        cin>>n1>>b>>t>>n2;
        if (t > T && T != 0){
            cout << "Not enough tokens.  Total = "<< T <<"."<< endl;
            continue;
        }
        if ((b && n2 > n1) || (!b && n2 < n1)){
            T = T + t;
            cout << "Win "<< t << "!  Total = "<< T <<"."<< endl;
        } else{
            T = T - t;
            cout << "Lose "<< t << ".  Total = "<< T <<"."<< endl;
        }

        if (T == 0){
            cout << "Game Over." <<endl;
            break;
        }
    }
}