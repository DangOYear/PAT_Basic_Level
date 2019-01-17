//
// Created by ShengyunYu on 2019/1/17.
//

//not solved

#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#define MAX_N 110

using namespace std;

struct Question{
    int score;
    int number;
    int choice[5];
}que[MAX_N];

int main(){
    int N,M;
    char choice;
    map<int,int> wrong_que;
    scanf("%d %d",&N,&M);
    for (int i = 0; i < M; ++i) {
        scanf("%d %d", &que[i].score, &que[i].number);
        for (int j = 0; j < que[i].number; ++j) {
            scanf("%c", &choice);
            que[i].choice;
        }

    }
    int num;
    for (int k = 0; k < N; ++k) {

        for (int i = 0; i < M; ++i) {
            getchar();
            scanf("%d",&num);
            for (int j = 0; j < num; ++j) {
                scanf("%c",&choice);

            }
            getchar();
        }
    }

}