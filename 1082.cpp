//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>


using namespace std;


int main(){
    int N;
    string ID;
    string champion,loser;
    int max = -1,min = 21000;
    int x,y;
    cin>>N;
    for (int i = 0; i < N; ++i) {
        cin>>ID>>x>>y;
        if((x * x + y * y) > max){
            loser = ID;
            max = x * x + y * y;
        }
        if((x * x + y * y) < min){
            champion = ID;
            min = x * x + y * y;
        }
    }
    cout << champion << " " << loser;
}