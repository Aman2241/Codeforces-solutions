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
#define cc for(int i=1;i<n+1;i++){cin>>a[i];if(a[i]==0){z++;}else{o++;}}
 
#define c2   if(sum==0 || z==n || o==n){cout<<n<<endl;for(int i=1;i<n+1;i++){cout<<a[i]<<" ";}cout<<endl;}

int main() 
{
 
 
  ll  t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        int z=0,o=0,sum=0,x=0,y=0;
        cc
        for(int i=1;i<n;i=i+2)
        {
            sum=sum+a[i]-a[i+1];
        }
      c2
         else if(n%2==0)
         {
             if(z>=n/2)
             {
                 cout<<z<<endl;
                 for(int i=0;i<z;i++)
                 {
                     cout<<0<<" ";
                 }
                 cout<<endl;
             }
             else 
             {
                if(o%2==0)
                {
                    cout<<o<<endl;;
                    for(int i=0;i<o;i++)
                     {
                         cout<<1<<" ";
                     }
                    cout<<endl;
                }
                 else
                 {
                    cout<<o-1<<endl;   
                     for(int i=0;i<o-1;i++)
                     {
                         cout<<1<<" ";
                     }
                     cout<<endl;
                 }
             }
         }
    }
 
 
return 0;
   
}














