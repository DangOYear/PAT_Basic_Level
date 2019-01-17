//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
using namespace std;

const int MAX_N = 110;

int main(){
    int N,M;
    int legal;
    int s;
    int teacher;
    double score;
    int sum,max=-1,min=110;
    cin>>N>>M;
    for (int i = 0; i < N; ++i) {
        cin >> teacher;
        legal = 0;
        sum = 0;
        max=-1;
        min=110;
        for (int j = 0; j < N-1; ++j) {
            cin>>s;
            if (s <= M && s >=0){
                sum += s;
                legal++;
                if (s > max){
                    max = s;
                }
                if (s < min){
                    min = s;
                }
            }
        }
        //cout << sum <<" " << max<<" " << min<<endl;
        score = (double)(sum - max - min) / (double)(legal-2);
        //cout << score << endl;
        score = (score + teacher) / 2;

        cout << (int)(score + 0.5) << endl;
    }
}