#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    int a[n];
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
       
    }

    sort(a+1,a+n+1);

    
    
    int sum1=0;
    for(int i=n;i>0;i--)
    {
        sum1+=a[i];

        if(sum1*2>sum)
        {
            cout<<n-i+1,exit(0);
        }
        
    }

    return 0;
    
    
    //cout<<count<<endl;
    
}