//Problem link: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

//Code: 

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,r; 
    cin>>a>>b;
    r = a+(a-1);
    r = max(r,b+(b-1));
    r = max(r,a+b);
    cout<<r<<endl;
    return 0;
}
