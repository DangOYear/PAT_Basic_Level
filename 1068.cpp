//
// Created by ShengyunYu on 2019/1/16.
//

#include<cstdio>
#include<cmath>
#include<map>


using namespace std;

#define MAX_N 1100

//typedef long long ll;

int img[MAX_N][MAX_N];
int m,n;
int tol;

map<int,int> v;

bool judge(int i,int j){
    if(v[img[i][j]]!=1)
        return false;
    //上
    if(i>=1)
        if(abs(img[i][j]-img[i-1][j])<=tol)
            return false;
    //下
    if(i<=n-2)
        if(abs(img[i][j]-img[i+1][j])<=tol)
            return false;
    //左
    if(j>=1)
        if(abs(img[i][j]-img[i][j-1])<=tol)
            return false;
    //右
    if(j<=m-2)
        if(abs(img[i][j]-img[i][j+1])<=tol)
            return false;
    //左上
    if(i>=1&&j>=1)
        if(abs(img[i][j]-img[i-1][j-1])<=tol)
            return false;
    //右上

    if(i>=1&&j<=m-2)
        if(abs(img[i][j]-img[i-1][j+1])<=tol)
            return false;
    //左下
    if(i<=n-2&&j>=1)
        if(abs(img[i][j]-img[i+1][j-1])<=tol)
            return false;
    //右下
    if(i<=n-2&&j<=m-2)
        if(abs(img[i][j]-img[i+1][j+1])<=tol)
            return false;
    return true;

}
int main(){
    scanf("%d%d%d",&m,&n,&tol);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&img[i][j]);
            v[img[i][j]]++;
        }
    }
    int pos_i,pos_j;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(judge(i,j)){
                count++;
                //printf("%d %d\n",i+1,j+1);
                pos_i=i;
                pos_j=j;
            }
        }
    }
    if(count==0){
        printf("Not Exist");
    }
    if(count==1){
        printf("(%d, %d): %lld",pos_j+1,pos_i+1,img[pos_i][pos_j]);
    }
    if(count>1){
        printf("Not Unique");
    }
    //printf("%d",count);
}
