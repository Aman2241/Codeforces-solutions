#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define arr_ip for(int i=0;i<n;i++){cin>>a[i]}
#define arr_op for(int i=0;i<n;i++) {cout<<a[i]}
#define SS second
#define ll long long int
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 



ll rev(ll x)
{

    ll rem=0,res=0;
    while(x>0)
    {
        rem=x%10;
        res=res*10+rem;

        x/=10;
    }
 return res;   
}
ll withoutzero(ll x)
{

    ll rem=0,res=0;
    while(x>0)
    {

        rem=x%10;

        if(rem!=0)
        {
            res=res*10+rem;
        }

        x/=10;

    }

return res;

}


int main() 
{
 
 
 ll a,b;
 cin>>a>>b;

 ll sum=a+b;

 ll x=withoutzero(a);
 ll y=withoutzero(b);

 ll z=withoutzero(sum);

 x=rev(x);
 y=rev(y);
 z=rev(z);
 

    if(x+y==z)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

return 0;
   
}