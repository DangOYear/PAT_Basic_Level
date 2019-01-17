//
// Created by ShengyunYu on 2019/1/17.
//

#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int N;
    char option;
    char TorF;
    vector<char> passwd;
    scanf("%d",&N);
    for (int i = 0; i < N; ++i){
        for (int j = 1; j <= 4; ++j) {
            getchar();
            //printf("----\n");
            scanf("%c-%c",&option,&TorF);
            if (TorF == 'T'){
                //printf("option=%c\n",option);
                passwd.push_back(option);
                //printf("----\n");
            }
        }
    }

    //printf("\n%d\n",passwd.size());
    for (int i = 0;i < passwd.size(); ++i){
        //printf("%c\n",passwd[i]);
        printf("%d",passwd[i]-'A'+1);
    }
}