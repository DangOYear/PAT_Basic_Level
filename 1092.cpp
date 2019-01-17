//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
#include <vector>


using namespace std;
const int MAX_N = 1001;


int main(){
    int N, M;
    cin>>N>>M;
    vector<int> v;
    int max_num = -1;
    int mooncake[MAX_N] = {0};
    int num;
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            cin>>num;
            mooncake[j] += num;
        }
    }
    for (int i = 0; i < N; i++){
        if (mooncake[i] > max_num){
            max_num = mooncake[i];
            v.clear();
            v.push_back(i + 1);
        }else {
            if (mooncake[i] == max_num) {
                v.push_back(i + 1);
            }
        }
    }
    cout << max_num << endl;
    for (int k = 0; k < v.size(); ++k) {
        cout << v[k];
        if (k != v.size() - 1){
            cout <<" ";
        }

    }

}