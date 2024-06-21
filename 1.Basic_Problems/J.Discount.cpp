//Problem: https://atcoder.jp/contests/abc193/tasks/abc193_a?lang=en

//Code: 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int r_price, d_price;
    cin>> r_price >> d_price;
    
    int total_d = r_price - d_price;
    double percentage = (double)total_d / r_price * 100;
    cout<< percentage << endl;
    return 0;
}
