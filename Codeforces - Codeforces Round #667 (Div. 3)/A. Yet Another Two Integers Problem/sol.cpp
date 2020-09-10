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
 

int solve()
{
    ll a,b;
     cin>>a>>b;

     if(a>b)
     {
         swap(a,b);
     }

     ll diff=b-a;

     ll count=0;

     if(a==b)
     {
         return 0;
     }

    
     if(diff%10>0)
     {
         return (diff/10)+1;
     }
     else
     {
         return diff/10;
     }
     


     
}

int main() 
{
 
 speed
 
 int t;
 cin>>t;
 while(t--)
 {
    ll ans= solve();

    cout<<ans<<endl;
}
 
 
return 0;
   
}