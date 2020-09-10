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
#define r1 ll res=(x*(x-1ul))/2l+((n-x)*(n-x-1ul))/2l+(n-x);
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
#define cc long double ans=sqrtl(1ul+4*(sum));ans=ans-1.0;ans=ans/2.0;ll final=ans;return final;

int binomialCoeff(int n, int k) 
{ 
    int res = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if (k > n - k) 
        k = n - k; 
  
    // Calculate value of 
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1] 
    for (int i = 0; i < k; ++i) { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
 



ll finds(ll sum)
{
    cc
}

void solve()
{


    ll n;
    cin>>n;
    ll sum=(n)*(n+1)/2;

    if(sum%2!=0)
    {
        cout<<0<<endl;
        return;
    }



    ll x=finds(sum);



    ll subs=x*(x+1)/2;



    if(sum/2==subs)
    {
        r1
        cout<<res;
    }
    else
    {
        cout<<n-x;
    }
    
}


int main() 
{

    speed
 
 int t;
 cin>>t;

 while(t--)
 {
     solve();
     cout<<"\n";
 }
 
 
 
return 0;
   
}