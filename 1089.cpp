//
// Created by ShengyunYu on 2019/1/18.
//

#include <iostream>


using namespace std;

const int MAX_N = 110;

//遍历

int main(){
    int N;
    int word[MAX_N] = {0};
    int wolf[2];
    bool flag = false;
    cin>>N;

    for (int i = 1; i <= N; ++i) cin>>word[i];

    for (int j = 1; j <= N - 1 ; ++j) {
        for (int i = j + 1; i <= N; ++i) {
            int lie = 0;
            int wolf_lie = 0;
            for (int k = 1; k <= N; ++k) {
                int say = abs(word[k]);
                if (word[k] < 0 && (say != i && say != j) ){
                    if (k == i || k == j)
                        wolf_lie++;
                    lie++;
                }
                if (word[k] > 0 && (say == i || say == j) ){
                    if (k == i || k == j)
                        wolf_lie++;
                    lie++;
                }
            }
            if (lie == 2 && wolf_lie ==1){
                wolf[0] = j;
                wolf[1] = i;
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    if (flag)
        cout << wolf[0] << " " << wolf[1];
    else
        cout<< "No Solution";
}