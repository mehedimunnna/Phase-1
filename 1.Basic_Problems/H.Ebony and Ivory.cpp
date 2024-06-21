//Problem: https://codeforces.com/problemset/problem/633/A

//Code: 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int ebony_dmg, ivory_dmg, total_dmg;
    cin>>ebony_dmg>>ivory_dmg>>total_dmg;
    
    for(int i=0; i<=total_dmg; i+=ebony_dmg){
        for(int j=0; j<=total_dmg; j+=ivory_dmg){
           if(i+j==total_dmg) {
               cout<<"Yes"<<endl;
               return 0;
           }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
