#include <iostream>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll n,k;
        cin>>n>>k;

       
        if(n<=k)
        {
            cout<<abs(n-k)<<endl;
        }
        else
        {
            cout<<(n+k)%2<<endl;
        }
        
        

        
        
        

        
        
        

    }
    
    return 0;
}