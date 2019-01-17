//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
#include <cmath>
using namespace std;

int digits(int num){
    int digit = 0;
    while(num > 0){
        num /= 10;
        digit++;
    }
    return pow(10, digit);
}

int main(){
    int M;
    int K;
    cin>>M;
    for (int i = 0; i < M; i++){
        cin>>K;
        int digit = digits(K);
        int N;
        for(N = 1; N < 10; N++){
            if( (N*K*K)%digit == K){
                cout << N << " " << N*K*K <<endl;
                break;
            }
        }
        if (N == 10){
            cout << "No" <<endl;
        }
    }

}