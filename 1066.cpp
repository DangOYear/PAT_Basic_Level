//
// Created by ShengyunYu on 2019/1/16.
//

#include<cstdio>

#define MAX_N 520

int n,m;
int a,b;
int p;
int num[MAX_N][MAX_N];

void print(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(num[i][j]<=b&&num[i][j]>=a){
                num[i][j]=p;
            }
            printf("%03d",num[i][j]);
            if(j!=m-1)
                printf(" ");
        }
        if(i!=n-1)
            printf("\n");
    }
}

int main(){
    scanf("%d%d%d%d%d",&n,&m,&a,&b,&p);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&num[i][j]);
        }
    }
    print();
}