#include<iostream>
using namespace std;

#define MAX_Student 1010
#define MAX_Num 1010

int  StuScore[MAX_Student];
    int score[MAX_Num];
    int ra[MAX_Num];
    int ans[MAX_Student][MAX_Num];

int main()
{
    int N,M;


    cin>>N>>M;
    for(int i=0;i<M;i++){
        cin>>score[i];
    }
    for(int i=0;i<M;i++){
        cin>>ra[i]; 
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>ans[i][j];
            if(ans[i][j]==ra[j]){
                StuScore[i]+=score[j]; 
            }

        } 
    }
    for(int i=0;i<N;i++){
        cout<<StuScore[i]<<endl;
    } 
}
