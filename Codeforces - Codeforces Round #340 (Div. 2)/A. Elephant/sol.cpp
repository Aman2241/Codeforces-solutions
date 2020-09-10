#include <iostream>

using namespace std;

int main(){

    int x;
    cin>>x;


    int ans=x%5;

    if(ans==0)
    {
        cout<<x/5<<endl;
    }
    else
    {
        /* code */
        cout<<x/5+1<<endl;
    }
    
    return 0;
}