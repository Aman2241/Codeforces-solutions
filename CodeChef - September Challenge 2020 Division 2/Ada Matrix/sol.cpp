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




void swap1(int &x, int &y) 
{ 
    int temp = x; 
    x = y; 
    y = temp; 
}


void solve()
{

    ll n,ans=0;
    cin>>n;

    vector<vector<ll>>V(n,vector<ll>(n,0));


    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>V[i][j];
        }
    }





    for(ll i=n-1;i>=0;i--)
    {
        if(V[0][i]!=i+1)
        {
            for(ll j=0;j<=i;j++)
            {
                for(ll k=j;k<=i;k++)
                {
                        ll temp=V[j][k];
                        V[j][k]=V[k][j];
                        V[k][j]=temp;
                        //swap1(V[j][k],V[k][j]);
                }
            }
            ans++;
        }
    }

cout<<ans<<"\n";

}
 
int main() 
{
    speed
 
 ll t;
 cin>>t;

 while(t--)
{
    
    solve();
} 
 
 
return 0;
   
}