//Problem link : https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en

//Code: 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a<=b){
        cout<< b - a+1 <<endl;
    }
    else{
        cout<<0<<endl;
    }
}
