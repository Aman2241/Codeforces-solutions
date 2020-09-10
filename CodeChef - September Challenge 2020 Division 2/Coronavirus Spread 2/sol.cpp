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



void solve()
{
    ll n;
    cin>>n;

    vector<ll>a(n);
   
   
   


  ll i;

    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }


ll l,r,x,y;
ll min,max;
vector<ll>t(n);
    
    
    for(i=0;i<n;i++)
    {
       x=0,y=0;


        for(l=i;l>=0;l--)
        {
            if(a[l]>a[i])
            x++;
        }

        for(r=i;r<n;r++)
        {
            if(a[r]<a[i])
            y++;
        }

        t[i]=x+y;
    }


//sorting to get first and last element as min and max

 min=t[0];
max=t[0];


for(i=0;i<n;i++)
{
      if(t[i]<min)
      {
            min=t[i];
      }
      if(t[i]>max)
      {
            max=t[i];
      }
}


min=min+1;
max=max+1;

cout<<min<<" "<<max<<endl;



}


int main() 
{
 
 speed

 int t;
 cin>>t;
 while(t--)
 {
     solve();
 }
 
 
 
return 0;
   
}