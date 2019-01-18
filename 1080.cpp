//
// Created by ShengyunYu on 2019/1/17.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

const int MAX_N = 30010;

struct student{
    student(){
        Gp = -1;
        Gmid = -1;
        Gfinal = -1;
        G = -1;
    }
    int Gp;
    int Gmid;
    int Gfinal;
    int G;
    string name;
};
struct student Stu[MAX_N];
map<string,int> m;



bool cmp(struct student a,struct student b){
    if (a.G != b.G)
        return a.G > b.G;
    return a.name < b.name;

}

int main(){
    int P,M,N;
    int count = 0;
    int pass = 0;
    string name;
    int score;
    cin>>P>>M>>N;
    for (int i = 0; i < P; ++i) {
        cin>>name>>score;
        if(m[name] == 0){
            count++;
            m[name] = count;
            Stu[count].name = name;
        }
        Stu[m[name]].Gp = score;
    }
    for (int i = 0; i < M; ++i) {
        cin>>name>>score;
        if(m[name] == 0){
            count++;
            m[name] = count;
            Stu[count].name = name;
        }
        Stu[m[name]].Gmid = score;
    }
    for (int i = 0; i < N; ++i) {
        cin>>name>>score;
        if(m[name] == 0){
            count++;
            m[name] = count;
            Stu[count].name = name;
        }
        Stu[m[name]].Gfinal = score;
    }
    for (int i = 1; i <= count ; ++i){
        if (Stu[i].Gp < 200){
            continue;
        } else{
            if (Stu[i].Gmid <= Stu[i].Gfinal){
                Stu[i].G = Stu[i].Gfinal;
            } else{
                Stu[i].G = int((Stu[i].Gmid * 0.4 + Stu[i].Gfinal * 0.6) + 0.5);
            }
            if (Stu[i].G >= 60)
                pass++;
        }
    }

    sort(Stu + 1, Stu + (count + 1), cmp);
    for (int i = 1; i <= pass; ++i) {
        cout << Stu[i].name <<" "<< Stu[i].Gp <<" "<< Stu[i].Gmid <<" "<< Stu[i].Gfinal <<" "<< Stu[i].G<< endl;
    }


}