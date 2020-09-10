#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int total=0,cap=0;
    while(n--)
    {
        int a,b;

        cin>>a>>b;

        total-=a;
        total+=b;

        cap=max(cap,total);
    }

    cout<<cap<<endl;
    return 0;
}